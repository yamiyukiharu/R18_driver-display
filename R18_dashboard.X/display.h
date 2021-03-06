#include "mcc_generated_files/mcc.h"
#include "FT800.h"

#define SMALl_FONT_SIZE 26
#define LARGE_FONT_SIZE 31
#define SPACING 15
#define NEWLINE 25
#define X_START 5
#define Y_START 5
#define X_START_SPEED 360
#define Y_START_SPEED 130
#define GEAR_LINE_WIDTH 96
#define GEAR_POSITION_OFFSET_X 380
#define GEAR_POSITION_OFFSET_Y 0
#define GAUGE_X 240
#define GAUGE_Y 115
#define GAUGE_SIZE 130
#define GAUGE_OPTIONS OPT_NOBACK | OPT_FLAT
#define GAUGE_MAJOR_DIVISION 10
#define GAUGE_MINOR_DIVISION 5
#define GAUGE_RANGE 50
#define BACKGROUND_COLOR_R 60
#define BACKGROUND_COLOR_G 60
#define BACKGROUND_COLOR_B 60   
#define INDICATOR_ACTIVE_COLOR_R 0
#define INDICATOR_ACTIVE_COLOR_G 255
#define INDICATOR_ACTIVE_COLOR_B 0 

void display(int rpm, int oilP, int fuelP, int tp, int speed, int gear, int engTemp, int oilTemp, int battVolts);
void display_start();
void display_labels();
void display_gear(int gear);
void display_waterTemp(int temp);
void display_oilTemp(int temp);
void display_fuel(int level);
void display_battery(int volts);
void display_oilPress(int pressure);
void display_rpm(int rpm);
void display_end();
void display_speed(int speed);
void display_tp(int tp);
void display_laptime(int current_int, int current_dec, int best_int, int best_dec, int last_int, int last_dec, int lap, int best_lap);
void display_status(bool launch, bool autoShift, bool clutch, bool drs, bool radio);
void display_bottom_section();
void display_brake_bias(int bias);
