#include <Wire.h>
#include "MAX30100_PulseOximeter.h"
#include <LiquidCrystal_I2C.h>

#define REPORTING_PERIOD_MS 1000

PulseOximeter pox;
LiquidCrystal_I2C lcd(0x27, 16, 2);

uint32_t tsLastReport = 0;

void onBeatDetected()
{
  Serial.println("Beat!");
  lcd.setCursor(0, 1);
  lcd.print("Heart Beat!     ");
}

void setup()
{
  Serial.begin(9600);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("Pulse Monitor");
  lcd.setCursor(0, 1);
  lcd.print("Initializing...");

  if (!pox.begin())
  {
    Serial.println("MAX30100 initialization failed!");
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Sensor Error!");
    while (1);
  }

  pox.setOnBeatDetectedCallback(onBeatDetected);

  delay(1000);
  lcd.clear();

  Serial.println("MAX30100 initialized successfully.");
}

void loop()
{
  pox.update();

  if (millis() - tsLastReport > REPORTING_PERIOD_MS)
  {
    float heartRate = pox.getHeartRate();
    float spo2 = pox.getSpO2();

    Serial.print("Heart Rate: ");
    Serial.print(heartRate);
    Serial.print(" BPM | SpO2: ");
    Serial.print(spo2);
    Serial.println(" %");

    lcd.clear();

    lcd.setCursor(0, 0);
    lcd.print("BPM:");
    lcd.print(heartRate, 0);

    lcd.setCursor(9, 0);
    lcd.print("SpO2:");
    lcd.print(spo2, 0);
    lcd.print("%");

    lcd.setCursor(0, 1);
    lcd.print("Place Finger");

    tsLastReport = millis();
  }
}
