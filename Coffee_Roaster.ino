/*  COFFEE ROASTER
 *   Made by :
 *   Yosep Putra Setiyanto
 *   Shania Argiliana
 *   
 *   @2023
 */


#include "max6675.h" // Temperature Sensor Driver Library
#include <ModbusRtu.h> // Modbus Communication Library
#include <EmonLib.h>  // Sertakan EmonLib Library
#include <RBDdimmer.h>// PWM AC Library
#include "FS.h" // The SPIFFS (FLASH filing system) is used to hold touch screen
#include <TFT_eSPI.h> // Graphics and font library for ILI9341 driver chip
#include <SPI.h>
#include <lvgl.h>
#include <TouchScreen.h>

#include <Ticker.h>

// SENSOR SUHU
// HSPI Pins
#define HSPI_CLK 14
#define HSPI_MISO 12
#define HSPI_CS1 21
#define HSPI_CS2 33
#define HSPI_CS3 32
MAX6675 thermocoupleET(HSPI_CLK, HSPI_CS1, HSPI_MISO);
MAX6675 thermocoupleBT(HSPI_CLK, HSPI_CS2, HSPI_MISO);
MAX6675 thermocoupleHeater(HSPI_CLK, HSPI_CS3, HSPI_MISO);
//MAX6675 thermocoupleHeater(thermoCLK, thermoCS3, thermoDO);

// MODBUS
// data array for modbus network sharing
#define IDSlave 17
#define channelModbus 0
Modbus slave(IDSlave,Serial,channelModbus); // this is slave @1 and RS-232 or USB-FTDI

// LCD TFT
/*Change to your screen resolution*/
static const uint16_t screenWidth  = 320;
static const uint16_t screenHeight = 240;
static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[ screenWidth * screenHeight / 10 ];
TFT_eSPI tft = TFT_eSPI(screenWidth, screenHeight);  // Invoke library
void my_disp_flush( lv_disp_drv_t *disp_drv, const lv_area_t *area, lv_color_t *color_p );
Ticker lv_tick_ticker;     // Objek Ticker untuk mengatur waktu sinkronisasi LVGL

// TOUCHSCREEN
//const int XP = 27, XM = 15, YP = 4, YM = 14; // default ESP32 Uno touchscreen pins
//TouchScreen ts = TouchScreen(XP, YP, XM, YM, 300);
#define CALIBRATION_FILE "/TouchCalData1"
// Set REPEAT_CAL to true instead of false to run calibration
// again, otherwise it will only be done once.
// Repeat calibration if you change the screen rotation.
#define REPEAT_CAL true

// SENSOR ARUS
#define sensorPinFan 39                                                                                                                // Pin analog ke mana sensor arus terhubung
#define sensorPinHeater 35                                                                                                        // Pin analog ke mana sensor arus terhubung
#define calibrationFactorFan 0.166395896
#define calibrationFactorHeater 1
EnergyMonitor emonFan;  // Buat instance EnergyMonitor
EnergyMonitor emonHeater;  // Buat instance EnergyMonitor

// AC Dimmer

// Motor Fan
#define outputPinFan  25
#define zerocrossFan  34 // for boards with CHANGEBLE input pins
dimmerLamp dimmerFan(outputPinFan, zerocrossFan); //initialase port for dimmer for ESP8266, ESP32, Arduino due boards

// Heater
#define outputPinHeater  26
#define zerocrossHeater  36 // for boards with CHANGEBLE input pins
dimmerLamp dimmerHeater(outputPinHeater, zerocrossHeater); //initialase port for dimmer for ESP8266, ESP32, Arduino due boards
