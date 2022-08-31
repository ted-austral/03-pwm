
#   Project 03-pwm

##  Using a potentiometer connected to the A/D converter, changes LED brightness (PWM)

    IntroCom - Austral - 2022 - EAM
    Uses ESP32 microcontroller

###  Hardware

    1K to 10K potetiometer
    Light emitting diode LED
    220 ohm resistor
    cables

###  Connections

    Connect potentiometer ends between GND and 3.3 volt
    Connect potentiometer cursor to GPIO "ANAIN" (see platformio.ini)
    Connect LED anode to GPIO "LED1"
    Connect LED cathode to one end of 220 ohm
    Connect other end of resistor 220 ohm to GND

###  Verification

    As you change potentiometer form one end to the other, serial monitor
    shows converted value and how LED change brightness

###  Links

#### Electronics Hub - In-depth ESP32 PWM Tutorial | How to use PWM in ESP32?

    https://www.electronicshub.org/esp32-pwm-tutorial/

#### Circuit Digest - ESP32 PWM Tutorial: Controlling the Brightness of LED

    https://circuitdigest.com/microcontroller-projects/esp32-pwm-tutorial-controlling-brightness-of-led





