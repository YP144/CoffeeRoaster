void modbusSendData(){
    datasuhu[0] = ((uint16_t) (CET*100));
    datasuhu[1] = ((uint16_t) (CBT*100));
    slave.poll(datasuhu,2);
}

void updateDataSuhu(){
    sprintf(buff,"%6.3f\t%6.3f\t%6.3f\t%6.3f\t%6.3f", IrmsHeater, IrmsFan, CET, CBT, suhuHeater);
    //Serial.println(buff);
    lv_label_set_text(ui_Label4, dtostrf(CBT, 6, 2, charArray1));
    lv_label_set_text(ui_Label5, dtostrf(CET, 6, 2, charArray2));
    lv_label_set_text(ui_Label16, dtostrf(suhuHeater, 6, 2, charArray2));
}
void updateDataArus(){
    lv_label_set_text(ui_Label19, dtostrf(IrmsHeater, 6, 2, charArray1));
    //lv_label_set_text(ui_Label16, dtostrf(IrmsFan, 6, 2, charArray2));
    lv_label_set_text(ui_Label9, dtostrf(IrmsFan, 6, 2, charArray2));
}
