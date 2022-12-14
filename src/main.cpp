/*
 *      Project 03-pwm
 *      Using a potentiometer connected to the A/D converter, changes LED brightness (PWM)
 *
 *      main.cpp
 */

#include <Arduino.h>

/*
 *     Definiciones
 */

/*
 *  Definitions in platformio.ini
 *  LED1        GPIO for LED
 *  ANAIN       A/D converter GPIO
 *  SERIAL_BAUD Serial port baud rate
 */

const long LOOP_DELAY = 250;

// setting PWM properties
const int freq = 5000;
const int ledChannel = 0;
const int resolution = 12;

/*
 *  Public functions
 */

void
setup(void)
{
    Serial.begin(SERIAL_BAUD);
    ledcSetup(ledChannel, freq, resolution);
    // attach the channel to the GPIO to be controlled
    ledcAttachPin(LED1, ledChannel);
}

void
loop(void)
{
    int sensorValue;

    sensorValue = analogRead(ANAIN);
    ledcWrite(ledChannel, sensorValue);
    Serial.println(sensorValue);

    delay(LOOP_DELAY);
}
