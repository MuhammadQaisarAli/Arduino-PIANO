#ifndef _SONGS_H_
#define _SONGS_H_

/*************************************************
 * Notes and their frequencies.
 *************************************************/

#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978

//////////// Buzzer Pin
#ifndef buzzer_pin
#define buzzer_pin 11     // default PWM pin 11 on Arduino.
#endif

///////////////Game of Thrones Song Start ////////////////////////
    
    #ifndef GameOfThronesBPM
    #define GameOfThronesBPM 70     // default 70  beats per minute for GOT Song.
    #endif
    
    int GameOfThronesNotes[] =
    {
      //PORTION 1, 4 TIMES
      NOTE_G4, NOTE_C4, NOTE_DS4, NOTE_F4,
      NOTE_G4, NOTE_C4, NOTE_DS4, NOTE_F4,
      NOTE_G4, NOTE_C4, NOTE_DS4, NOTE_F4,
      NOTE_G4, NOTE_C4, NOTE_DS4, NOTE_F4,
      
      
      //PORTION 2, 4 TIMES
      NOTE_G4, NOTE_C4, NOTE_E4, NOTE_F4,
      NOTE_G4, NOTE_C4, NOTE_E4, NOTE_F4,
      NOTE_G4, NOTE_C4, NOTE_E4, NOTE_F4,
      NOTE_G4, NOTE_C4, NOTE_E4, NOTE_F4,
    
      //PORTION 3, 1 TIMES
      NOTE_G4, NOTE_C4, NOTE_DS4, NOTE_F4, NOTE_D4,
    
      //PORTION 4, 3 TIMES
      NOTE_G3, NOTE_AS3, NOTE_C4, NOTE_D4,
      NOTE_G3, NOTE_AS3, NOTE_C4, NOTE_D4,
      NOTE_G3, NOTE_AS3, NOTE_C4, NOTE_D4,
    
      //PORTION 5, 1 TIMES
      NOTE_G3, NOTE_AS3, NOTE_C4, NOTE_D4, 
      NOTE_F4, NOTE_AS3, NOTE_DS4, NOTE_D4,
      NOTE_F4, NOTE_AS3, NOTE_DS4, NOTE_D4, NOTE_C4, 
    
      //PORTION 6, 3 TIMES
      NOTE_GS3, NOTE_AS3, NOTE_C4, NOTE_F3,
      NOTE_GS3, NOTE_AS3, NOTE_C4, NOTE_F3,
      NOTE_GS3, NOTE_AS3, NOTE_C4, NOTE_F3,
      
      //PORTION 7, 1 TIMES
      NOTE_G4, NOTE_C4, NOTE_DS4, NOTE_F4, 
      NOTE_G4, NOTE_C4, NOTE_DS4, NOTE_F4, NOTE_D4,
    
      //PORTION 8, 4 TIMES
      NOTE_G3, NOTE_AS3, NOTE_C4, NOTE_D4,
      NOTE_G3, NOTE_AS3, NOTE_C4, NOTE_D4,
      NOTE_G3, NOTE_AS3, NOTE_C4, NOTE_D4,
      NOTE_G3, NOTE_AS3, NOTE_C4, NOTE_D4  
      
  };
    int GameOfThronestempo[] = 
    {
      16, 16, 8, 8,
      16, 16, 8, 8,
      16, 16, 8, 8,
      16, 16, 8, 8,
    
    
      16, 16, 8, 8,
      16, 16, 8, 8,
      16, 16, 8, 8,
      16, 16, 8, 8,
    
    
      16, 16, 8, 8, 16,
    
      16, 8, 8, 16,
      16, 8, 8, 16,
      16, 8, 8, 16,
    
      16, 8, 8, 32,
      32, 32, 8, 8,
      32, 32, 8, 8, 16,
    
      8, 8, 16, 16,
      8, 8, 16, 16,
      8, 8, 16, 16,
    
      32, 32, 8, 8,
      32, 32, 8, 8, 16,
    
      16, 8, 8, 16,
      16, 8, 8, 16,
      16, 8, 8, 16,
      16, 8, 8, 16, 
    
    };
  
    void GameOfThronesSong()
    {
      int _size = sizeof(GameOfThronesNotes) / sizeof(int);
    
      for (int thisNote = 0; (thisNote < _size); thisNote++)
      {
        int noteDuration = (60000 / GameOfThronesBPM) / (32 / GameOfThronestempo[thisNote]);
        tone(buzzer_pin, GameOfThronesNotes[thisNote], noteDuration);
        int pauseBetweenNotes = noteDuration * 1.1;
        delay(pauseBetweenNotes);
     noTone(buzzer_pin);
      }
    }
///////////////Game of Thrones Song End ////////////////////////

///////////////Happy Birth Day Song Start ////////////////////////

#ifndef HappyBirthDayBPM
#define HappyBirthDayBPM 80     // default 80 beats per minute for HBD Song.
#endif

int HappyBirthDayNotes[]=
{
  NOTE_G4, NOTE_G4, NOTE_A4, NOTE_G4,  NOTE_C5, NOTE_B4,       0,
  
  NOTE_G4, NOTE_G4, NOTE_A4, NOTE_G4,  NOTE_D5, NOTE_C5,       0,

  NOTE_G4, NOTE_G4, NOTE_G5, NOTE_E5,  NOTE_C5, NOTE_B4, NOTE_A4,  0,

  NOTE_F5, NOTE_F5, NOTE_E5, NOTE_C5,  NOTE_D5, NOTE_C5,       0
};

int HappyBirthDaytempo[]=
{
  16, 16, 16, 16, 16, 32, 16,
  16, 16, 16, 16, 16, 32, 16,
  16, 16, 16, 16, 16, 16, 32, 16,
  16, 16, 16, 16, 16, 32, 16
};

void HappyBirthDaySong()
{
  int _size = sizeof(HappyBirthDayNotes) / sizeof(int);
  
  for (int thisNote = 0; (thisNote < _size); thisNote++)
  {
    int noteDuration = (60000 / HappyBirthDayBPM) / (32 / HappyBirthDaytempo[thisNote]);

    tone(buzzer_pin, HappyBirthDayNotes[thisNote], noteDuration);

    int pauseBetweenNotes = noteDuration * 1.2;
    delay(pauseBetweenNotes);
    noTone(buzzer_pin);
  }

}


///////////////Happy Birth Day Song End ////////////////////////

///////////////Coffin Dance Song Start ////////////////////////

#ifndef CoffinDanceBPM
#define CoffinDanceBPM 160     // default 160  beats per minute for Coffin Dance Song.
#endif


int CoffinDanceNotes[] = 
{
  // 4 TIMES
  NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4,
  NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4,
  NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4,
  NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4,
  NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4,

  // 1 TIMES
  NOTE_D5, NOTE_D5, NOTE_D5, NOTE_D5,
  NOTE_C5, NOTE_C5, NOTE_C5, NOTE_C5, 
  NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5, 

  // 3 TIMES
  NOTE_G5, NOTE_G5, NOTE_G5, NOTE_G5,
  NOTE_G5, NOTE_G5, NOTE_G5, NOTE_G5, 
  NOTE_G5, NOTE_G5, NOTE_G5, NOTE_G5, 

  // 1 TIMES
  NOTE_C5, NOTE_AS4, NOTE_A4, NOTE_F4,
  NOTE_G4,        0, NOTE_G4, NOTE_D5,
  NOTE_C5,        0, NOTE_AS4,      0,
  NOTE_A4,        0, NOTE_A4, NOTE_A4,
  NOTE_C5,        0, NOTE_AS4, NOTE_A4, 

  // 2 TIMES
  NOTE_G4,        0, NOTE_G4, NOTE_AS5,
  NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_AS5,
  NOTE_G4,        0, NOTE_G4, NOTE_AS5,
  NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_AS5,

  // 1 TIMES
  NOTE_G4,        0, NOTE_G4, NOTE_D5,
  NOTE_C5,        0, NOTE_AS4,      0,
  NOTE_A4,        0, NOTE_A4, NOTE_A4,
  NOTE_C5,        0, NOTE_AS4, NOTE_A4,

  // 2 TIMES
  NOTE_G4,        0, NOTE_G4, NOTE_AS5,
  NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_AS5,
  NOTE_G4,        0, NOTE_G4, NOTE_AS5,
  NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_AS5
 };


int CoffinDancetempo[] = 
{
  16,16,16,16,
  16,16,16,16,
  16,16,16,16,
  16,16,16,16,
  16,16,16,16,
  
  16,16,16,16,
  16,16,16,16,
  16,16,16,16,
  
  16,16,16,16,
  16,16,16,16,
  16,16,16,16,
  
  16,16,16,16,
  16,16,16,16,
  16,16,16,16,
  16,16,16,16,
  16,16,16,16,
  
  16,16,16,16,
  16,16,16,16,
  16,16,16,16,
  16,16,16,16,
  
  16,16,16,16,
  16,16,16,16,
  16,16,16,16,
  16,16,16,16,
  
  16,16,16,16,
  16,16,16,16,
  16,16,16,16,
  16,16,16,16
  };

void CoffinDanceSong()
{
  int _size = sizeof(CoffinDanceNotes) / sizeof(int);
  
  for (int thisNote = 0; (thisNote < _size); thisNote++)
  {
    int noteDuration = (60000.0 / CoffinDanceBPM) / (32.0 / CoffinDancetempo[thisNote]);

    tone(buzzer_pin, CoffinDanceNotes[thisNote], noteDuration);

    int pauseBetweenNotes = noteDuration * 1.3;
    delay(pauseBetweenNotes);
    noTone(buzzer_pin);
  }
}

///////////////Coffin Dance Song End ////////////////////////

///////////////Despacito Song Start ////////////////////////

#ifndef DespacitoBPM
#define DespacitoBPM 50     // default 50  beats per minute for Despacito Song.
#endif

int DespacitoNotes[] = 
{
  NOTE_D5,  NOTE_CS5, NOTE_B4,  NOTE_FS4, 0,
  NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_FS4,
  NOTE_B4,  NOTE_B4,  NOTE_B4,  NOTE_B4,
  NOTE_A4,  NOTE_B4,  0,        0,        NOTE_G4,   0,
  NOTE_G4,  NOTE_G4,  NOTE_G4,  NOTE_G4,  NOTE_G4,   NOTE_G4, 
  NOTE_B4,  NOTE_B4,  NOTE_B4,  NOTE_B4, 
  NOTE_CS5, NOTE_D5,  0,        0,        NOTE_A4,   0,
  NOTE_A4,  NOTE_A4,  NOTE_A4,  NOTE_A4, 
  NOTE_D5,  NOTE_CS5, NOTE_D5,  NOTE_CS5,  
  NOTE_D5,  NOTE_E5,  NOTE_E5,  NOTE_CS5, 
  
 };


int Despacitotempo[] = 
{
  16, 16, 8, 4, 4,
  4,  4,  4, 4, 4,
  4,  4,  4, 8,
  4,  4,  4, 4, 4,  4,  4,
  4,  4,  4, 4, 4,  4,
  4,  4,  4, 8,
  4,  4,  4, 4, 4,  4,  4,
  4,  4,  4, 4,
  4,  4,  4, 4, 
  8,  4,  4, 12

};

void DespacitoSong()
{
  int _size = sizeof(DespacitoNotes) / sizeof(int);
  
  for (int thisNote = 0; (thisNote < _size); thisNote++)
  {
    int noteDuration = (60000.0 / DespacitoBPM) / (32.0 / Despacitotempo[thisNote]);

    tone(buzzer_pin, DespacitoNotes[thisNote], noteDuration);

    int pauseBetweenNotes = noteDuration * 1.3;
    delay(pauseBetweenNotes);
    noTone(buzzer_pin);
  }
}
///////////////Despacito Song End ////////////////////////

 #endif
  
