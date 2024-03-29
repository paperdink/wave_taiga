
#ifndef CONFIG_H
#define CONFIG_H

#include <GxEPD.h>
#include <GxGDEW042T2/GxGDEW042T2.h>      // 4.2" b/w
#include <GxIO/GxIO_SPI/GxIO_SPI.h>
#include <GxIO/GxIO.h>

#include "Mont_HeavyDEMO25pt7b.h"
#include "Gobold_Thin9pt7b.h"
#include "Mont_ExtraLightDEMO8pt7b.h"

// DETAILS TO EDIT
#define SSID     "*****" // network SSID (name of wifi network)
#define PASSWORD "*****" // network password
#define TAGIA_PROJECT_USERNAME "*****" // taiga project username
#define TAIGA_PROJECT_PASSWORD "*****" // taiga project password
#define TAGIA_PROJECT_NAME "*****" // taiga project name
#define CITY "*****" // city for weather
#define COUNTRY "*****" // country for weather
#define OWM_ID "*****" // open weather map APP ID

// Time zone from list https://github.com/nayarsystems/posix_tz_db/blob/master/zones.csv
#define TIME_ZONE "PST8PDT,M3.2.0,M11.1.0"

// Offset to change start week. 0=>Sun, 1=>Sat, 2=>Fri ... 6=>Mon
#define START_DAY_OFFSET 0

// Show forecasted weather this many hours from update time.
// 0 for current weather
#define FORECAST_HOURS 3

// Number of images in data folder. Will cycle through these images
#define NUM_IMAGES 5

// Number of times to update starting 12am
// 1 = Updates every 24 hours
// 2 = Updates every 12 hours
// 3 = Updates every 8 hours. Not a good idea since it won't line up with day changes.
// 4 = Updates every 6 hours
// ... and so on
// Higher number means lower battery life
#define UPDATES_PER_DAY 4

#define DEBUG Serial

// JSON buffer size for tasks
#define MAX_TODO_STR_LENGTH 15
#define MAX_TASKS 11

// PIN ASSIGNMENT

// I2C pins
#define SDA 16
#define SCL 17

// SPI pins

// SD card pins
#define SD_CS 21
#define SD_EN 5

// E-paper pins
#define EPD_CS 22
#define EPD_DC 15
#define EPD_BUSY 34
#define EPD_EN 12
#define EPD_RES 13

// PCF8574 pins
#define PCF_INT 35
#define SD_CD P4 // input
#define EXT_GPIO1 P5
#define EXT_GPIO2 P6
#define EXT_GPIO3 P7
#define PCF_I2C_ADDR 0x20

// LiPo
#define CHARGING_PIN 36
#define BATT_EN 25
#define BATTERY_VOLTAGE 34

// Fonts
#define LARGE_FONT &Mont_HeavyDEMO25pt7b
#define MED_FONT &Gobold_Thin9pt7b
#define SMALL_FONT &Mont_ExtraLightDEMO8pt7b

#endif /* CONFIG_H */
