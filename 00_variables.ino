// Pengaturan Delay untuk pembacaan Sensor
const unsigned long intervalSensor = 400;
unsigned long previousMillisSensor = 0;
const unsigned long intervalDetik = 1000;
unsigned long previousMillisDetik = 0;
const unsigned long intervalPWM = 250;
unsigned long previousMillisPWM = 0;

// ET and BT
float CET,CBT,suhuHeater;

// Modbus data ET dan BT
uint16_t datasuhu[2] = {  0, 0 };

//Suhu Heater
//float suhuHeater;

// Array karakter untuk menyimpan hasil konversi
char charArray1[10];  
char charArray2[10];
char charArray3[10];
char charArray4[10];
char buff[60];

// LCD TFT
// some colours to play with
#define BLACK   0x0000
#define BLUE    0x001F
#define RED     0xF800
#define GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0
#define WHITE   0xFFFF
#define TFT_GREY 0x5AEB // New colour

// adjust pressure sensitivity - note works 'backwards'
#define MINPRESSURE 350
#define MAXPRESSURE 1000

//Calibration
const int coords[] = {3350, 300, 0, 3650}; // xmax, xmin, ymin, ymax
uint16_t calibrationScreen[] = {347,3530,180,3497,4};

// Koordinat touch yang terdeteksi
//uint16_t pixel_x, pixel_y;
uint16_t t_x = 0, t_y = 0; // To store the touch coordinates 
int coordtouch[2] = {0,0};

// Mapping Button
const int coordbtn1[4] = {160, 210, 125, 170};
const int coordbtn2[4] = {25, 75, 125, 170};
const int coordbtn3[4] = {25 , 75, 185, 230};
const int coordbtn4[4] = {160 , 210, 185, 230};

// Pembacaan Sensor Arus
double IrmsFan;
double IrmsHeater;

// PWM AC Dimmer

// Fan
int labelFan = 0;
int outValFan = 0;
int preValFan;

//Heater
int labelHeater = 0;
int outValHeater = 0;
int preValHeater;

// Elemen Grafis 
 
void ui_Screen1_screen_init(void);
lv_obj_t * ui_Screen1;
lv_obj_t * ui_Panel2;
lv_obj_t * ui_Label1;
lv_obj_t * ui_Label2;
lv_obj_t * ui_Label3;
lv_obj_t * ui_Panel1;
lv_obj_t * ui_Label5;
lv_obj_t * ui_Label4;
lv_obj_t * ui_Panel4;
lv_obj_t * ui_Label7;
lv_obj_t * ui_Panel3;
lv_obj_t * ui_Label8;
lv_obj_t * ui_Label9;
lv_obj_t * ui_Button2;
lv_obj_t * ui_Label10;
lv_obj_t * ui_Button1;
lv_obj_t * ui_Label11;
lv_obj_t * ui_Label6;
lv_obj_t * ui_Panel5;
lv_obj_t * ui_Label12;
lv_obj_t * ui_Button3;
lv_obj_t * ui_Label13;
lv_obj_t * ui_Button4;
lv_obj_t * ui_Label14;
lv_obj_t * ui_Label15;
lv_obj_t * ui_Panel6;
lv_obj_t * ui_Label17;
lv_obj_t * ui_Label16;
lv_obj_t * ui_Label18;
lv_obj_t * ui_Panel7;
lv_obj_t * ui_Label19;
lv_obj_t * ui____initial_actions0;
