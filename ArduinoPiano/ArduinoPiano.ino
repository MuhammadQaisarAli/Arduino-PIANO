/*
    Arduino PIANO
    
    This is Arduino Code for Playing few songs on a Speaker 
    (I have used a speaker) or Buzzer (eg. Pizo) connected Arduino. 

    The circuit:
      * A buzzer or speaker is attached to PIN 8.

    Components Used:
      * Arduino UNO/Mega
      * Buzzer

    Circuit Diagram:
      Buzzer or Speaker has 2 pins. One is connected to GND and another 
      is connected to PIN 8 of UNO or some other compatible board.


    Songs Played:
    The following 4 songs are played via the code. 

      * Game of Thrones
      * Happy Birthday
      * Coffin Dance
      * Despacito

    To simplify the code, notes patterns and respective functions are stored in Songs.h file.


    Created: 15 Jan 2023
    By: Muhammad Qaisar Ali

    https://github.com/MuhammadQaisarAli/

    This example code is part of the public domain.


*/

#define buzzer_pin 8

#define GameOfThronesBPM 70   // Beats per minute
#define HappyBirthDayBPM 80
#define CoffinDanceBPM 160
#define DespacitoBPM 50

#include "Songs.h"


/////////////////////////////////////

void setup()
{
  pinMode(buzzer_pin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Different Songs By: Muhammad Qaisar Ali");
}

void loop()
{

  Serial.println("Game of Thrones Song");
  GameOfThronesSong();
  delay(1000);

  Serial.println("Happy Birth Day Song");
  HappyBirthDaySong();
  HappyBirthDaySong();
  delay(1000);

  Serial.println("Coffin Dance Song");
  CoffinDanceSong();
  delay(1000);

  Serial.println("Despacito Song");
  DespacitoSong();
  DespacitoSong();
  delay(1000);
  
}
