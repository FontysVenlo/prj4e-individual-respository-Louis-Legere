#include <Arduino.h>

#define RXD 19  // Define RX pin
#define TXD 23  // Define TX pin
#include <time.h>
#include <stdlib.h>

HardwareSerial mp3Serial(1);  // Use Serial1 for communication with MP3 module     So thats for the UART port (Its a communication protocll like I2C)

int playRandomSound();

void setup() {
  // serial communication for pc
  Serial.begin(115200);

  // Start the communication with MP3 module via UART
  mp3Serial.begin(9600, SERIAL_8N1, RXD, TXD); //SERIAL_8N1 is the default frame: 8 bits no parity 1 stop

  //time for initialization
  delay(1000);

  
  // Set volume to 15 (0x0F is hex for 15)
  byte setVolume[] = { 0x7E, 0x03, 0x31, 0x1E, 0xEF };
  mp3Serial.write(setVolume, sizeof(setVolume));
  delay(200); // wait for it to work

  /*

  byte playCommand[] = { 0x7E, 0x04, 0x41, 0x00, 0x01, 0xEF };  // Play first song command 5 bytes
  mp3Serial.write(playCommand, sizeof(playCommand)); // send 5 bytes (important for memory safety)

  Serial.println("Playing first song...");
  */

  srand(time(NULL));   // Initialization, should only be called once.

  playRandomSound();
}

void loop() {
  
}


  int playRandomSound(){
    for (;;)
    {
      int timeToWait = rand() % 20 + 20; //delay between the quacks
      delay(timeToWait * 1000);

      int r = rand() % 10 + 1; 
      Serial.println(r);

      byte playCommand[] = { 0x7E, 0x04, 0x41, 0x00, 0x00, 0xEF };
      playCommand[4] = r; // Set the song index to play
      mp3Serial.write(playCommand, sizeof(playCommand));
    
      Serial.print("Playing song number: ");
      Serial.println(r);
      delay(200);
    }
  }
