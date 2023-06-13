#include <Arduino.h>

extern "C" void setup()
{
    pinMode(LED_BLUE, OUTPUT);
}

extern "C" void loop()
{
    digitalWrite(LED_BLUE, LOW);
    delay(200);
    digitalWrite(LED_BLUE, HIGH);
    delay(1000);
}
