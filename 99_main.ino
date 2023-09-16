
// Create 15 keys for the keypad
//char keyLabel[15][5] = {ui_Button4, "Del", "Send", "1", "2", "3", "4", "5", "6", "7", "8", "9", ".", "0", "#" };
//uint16_t keyColor[15] = {TFT_RED, TFT_DARKGREY, TFT_DARKGREEN,
//                         TFT_BLUE, TFT_BLUE, TFT_BLUE,
//                         TFT_BLUE, TFT_BLUE, TFT_BLUE,
//                         TFT_BLUE, TFT_BLUE, TFT_BLUE,
//                         TFT_BLUE, TFT_BLUE, TFT_BLUE
//                        };

// Invoke the TFT_eSPI button class and create all the button objects
//TFT_eSPI_Button key[15];


void setup()
{
    Serial.begin( 115200 ); 
      
    slave.start();
    //Serial.println(" Modbus Starting " );
    delay(90);
    
    emonFan.current(sensorPinFan, calibrationFactorFan);
    delay(30);
    emonHeater.current(sensorPinHeater, calibrationFactorHeater);
    //Serial.println(" Current Sensor Starting " );
    delay(30);

    dimmerFan.begin(NORMAL_MODE, ON); //dimmer initialisation: name.begin(MODE, STATE) 
    delay(90);
    dimmerHeater.begin(NORMAL_MODE, ON); //dimmer initialisation: name.begin(MODE, STATE) 
    //Serial.println(" AC Dimmer Starting " );
    delay(90);
    
    String LVGL_Arduino = " LVGL Arduino ";
    LVGL_Arduino += String('V') + lv_version_major() + "." + lv_version_minor() + "." + lv_version_patch();
    //Serial.println( LVGL_Arduino );
    lv_init();
    delay(90);
    
    #if LV_USE_LOG != 0
    lv_log_register_print_cb( my_print ); /* register print function for debugging */
    #endif

    tft.begin();          /* TFT init */
    delay(90);
    tft.setRotation( 1 ); /* Landscape orientation, flipped */
    //Serial.println(" TFT Starting " );
    delay(90);

    // Calibrate the touch screen and retrieve the scaling factors
    //touch_calibrate();
    tft.setTouch(calibrationScreen);

    //Serial.println(" Screen SetUp " );
    lv_disp_draw_buf_init( &draw_buf, buf, NULL, screenWidth * screenHeight / 10 );
    delay(90);

    /*Initialize the display*/
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init( &disp_drv );
    delay(90);
    
    /*Change the following line to your display resolution*/
    disp_drv.hor_res = screenHeight;
    disp_drv.ver_res = screenWidth;
    disp_drv.flush_cb = my_disp_flush;
    disp_drv.draw_buf = &draw_buf;
    lv_disp_drv_register( &disp_drv );
    delay(90);
        
    ui_Screen1_screen_init();
    delay(90);
    
    ui_init();
    Serial.println(" Screen Ready " );
    delay(90);
    
    
//    sprintf(buff,"%s %s %s %s", "IrmsHeater", "IrmsFan", "CBT", "CET");
//    Serial.println(buff);

    pinMode(HSPI_CS1, OUTPUT);
    pinMode(HSPI_CS2, OUTPUT);
    pinMode(HSPI_CS3, OUTPUT);

    digitalWrite(HSPI_CS1,HIGH);
    digitalWrite(HSPI_CS2,HIGH);
    digitalWrite(HSPI_CS3,HIGH);
    
    // Start ticker for LVGL time synchronization
    lv_tick_ticker.attach_ms(1, lv_tick_handler);
    Serial.println( " Setup done" );
}
void loop()
{    
    unsigned long currentMillis = millis();
    
    lv_timer_handler(); /* let the GUI do its work */
    delay( 5 );
    lv_tick_inc(5);

    
    if (currentMillis - previousMillisSensor >= intervalSensor) {
      // Simpan waktu terakhir fungsi dieksekusi
      previousMillisSensor = currentMillis;

      // Fungsi yang dijalankan setiap interval
//      bool touched = Touch_getXY(&pixel_x, &pixel_y, false, true);
  
      // Pressed will be set true is there is a valid touch on the screen
      bool pressed = tft.getTouch(&t_x, &t_y);
      
      bacaSensorSuhuET();
      bacaSensorSuhuBT();
      bacaSensorSuhuHeater();
      bacaSensorArus();
      modbusSendData();
      updateDataSuhu();
      updateDataArus();
      lv_label_set_text(ui_Label7, "FAN (%)");
      lv_label_set_text(ui_Label12, "HEATER (%)");
    }    

    if (currentMillis - previousMillisDetik >= intervalDetik) {
      // Simpan waktu terakhir fungsi dieksekusi
      previousMillisDetik = currentMillis;
      const float timer = currentMillis/1000;
//      lv_label_set_text(ui_Label9, dtostrf(timer, 6, 0, charArray4));
    }   
   

  // Pressed will be set true is there is a valid touch on the screen
  bool pressed = tft.getTouch(&t_x, &t_y);
  if (pressed){
    tft.fillCircle(t_x, t_y, 1, YELLOW);
    coordtouch[0]=t_x;
    coordtouch[1]=t_y;
    //Serial.print(coordtouch[0]);
    //Serial.print(" - ");
    //Serial.println(coordtouch[1]);
  }

  // / Check if any key coordinate boxes contain the touch coordinates
  
    
    //int touched = false;
    if ( pressed ){
      Serial.print("Touched");
      preValFan = outValFan;
      preValHeater = outValHeater; 
      if ( (coordtouch[0] >= coordbtn1[0]) && (coordtouch[0] <= coordbtn1[1]) && (coordtouch[1] >= coordbtn1[2]) && (coordtouch[1] <= coordbtn1[3]) && (labelFan < 100)){
        Serial.println(" fan plus ");
        labelFan += 10;
        lv_label_set_text(ui_Label10, dtostrf(labelFan, 6, 0, charArray3));
        outValFan = labelFan;
      }
      else if ( (coordtouch[0] >= coordbtn2[0]) && (coordtouch[0] <= coordbtn2[1]) && (coordtouch[1] >= coordbtn2[2]) && (coordtouch[1] <= coordbtn2[3]) && (labelFan >= 0)){
        Serial.println(" fan minus ");
        labelFan -= 10;
        if ((labelFan <= 20) && (labelHeater > 0)){ //Fan tidak bisa kurang dari 20% saat heater masih menyala
          labelFan += 10;
          //lv_label_set_text(ui_Label10, dtostrf(labelFan, 6, 0, charArray3));
        }
//        else if ((labelFan == 0) && (labelHeater < 10)){
//          outValFan = 1;
//          lv_label_set_text(ui_Label10, dtostrf(labelFan, 6, 0, charArray3));
//        }
        else{
          outValFan = labelFan;
          lv_label_set_text(ui_Label10, dtostrf(labelFan, 6, 0, charArray3));
        } 
      }
      else if ( (coordtouch[0] >= coordbtn3[0]) && (coordtouch[0] <= coordbtn3[1]) && (coordtouch[1] >= coordbtn3[2]) && (coordtouch[1] <= coordbtn3[3]) && (labelHeater >= 0)){
        Serial.println(" Heater minus ");
        labelHeater -= 10;
        lv_label_set_text(ui_Label13, dtostrf(labelHeater, 6, 0, charArray4));
        if (labelHeater == 0){
          outValHeater = 0;
        }else{
          outValHeater = labelHeater;
        } 

      }
      //&& (outValFan >= 20)
      else if ( (coordtouch[0] >= coordbtn4[0]) && (coordtouch[0] <= coordbtn4[1]) && (coordtouch[1] >= coordbtn4[2]) && (coordtouch[1] <= coordbtn4[3]) && (labelHeater < 100) ){
        Serial.println(" Heater plus ");
        labelHeater += 10;
        lv_label_set_text(ui_Label13, dtostrf(labelHeater, 6, 0, charArray4));
        outValHeater = labelHeater;
        //Serial.println(preValHeater);
        //Serial.println(outValHeater);
      }
      delay(300);
    }

    if (currentMillis - previousMillisPWM >= intervalPWM) {
      // Simpan waktu terakhir fungsi dieksekusi
      previousMillisPWM = currentMillis;
      dimmerFan.setPower(outValFan);
      dimmerHeater.setPower(outValHeater);
      //Serial.println((bool)(((int)preValHeater) == ((int)outValHeater)));
      if ((int)preValFan != (int)outValFan)
      {
        Serial.print("FanValue -> ");
        Serial.print(dimmerFan.getPower());
        Serial.println("%");
        preValFan = outValFan;
      }
      else if ((int)preValHeater != (int)outValHeater)
      {
        Serial.print("HeaterValue -> ");
        Serial.print(dimmerHeater.getPower());
        Serial.println("%");
        preValHeater = outValHeater;
      }
    } 
    
    coordtouch[0] = 0;
    coordtouch[1] = 0;
}
