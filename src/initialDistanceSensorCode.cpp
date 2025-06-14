/*********
  Rui Santos
  Complete project details at https://RandomNerdTutorials.com/vs-code-platformio-ide-esp32-esp8266-arduino/
*********/

#include <Arduino.h>
#include <Wire.h>

float distance = 9999;
int firstDistance;
boolean first = true;

#define trigger 13
#define echo 15


#define LED 25



void heartbeat(void * parameter);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  pinMode(LED, OUTPUT);


  //task for hearthbeat
  xTaskCreate(
  heartbeat, // Function that should be called
  "heartbeat", // Name of the task (for debugging)
  2000, // Stack size (bytes)
  (void *) LED, // Parameter to pass
  1, // Task priority
  NULL // Task handle
  );
 
    pinMode(trigger, OUTPUT);
    pinMode(echo, INPUT);

    for(;;){
        long duration;

        digitalWrite(trigger, LOW);
        delayMicroseconds(2);

        digitalWrite(trigger, HIGH);
        delayMicroseconds(10);
        digitalWrite(trigger, LOW);

        duration = pulseIn(echo, HIGH);
        distance = duration * 0.034 / 2;
        if(first){
          firstDistance = distance;
          first = false;
        }
        delay(100); 
        Serial.printf("FIRST DISTANCE: %d", firstDistance);
        Serial.print("Distance: ");
        Serial.println(distance);
    }
}



void loop() {
  
}

void heartbeat(void * parameter){
  // use internal (onboard) led as heartbeat monitor
  int led; 
  led = (int) parameter;
  for(;;){ // infinite loop
  // Turn the LED on
  digitalWrite(led, HIGH);
  // Pause the task for 500ms
  vTaskDelay(500 / portTICK_PERIOD_MS);
  // Turn the LED off
  digitalWrite(led, LOW);
  // Pause the task again for 500ms
  vTaskDelay(500 / portTICK_PERIOD_MS);
  }
}
