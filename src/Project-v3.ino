#include "pitches.h"
#define ACTIVATED LOW


const int PIEZO = 11;
const int LED = 13;

int buttonSong = 8;
const int BUTTON_A = 6;
const int BUTTON_G = 5;
const int BUTTON_F = 4;
const int BUTTON_E = 3;
const int BUTTON_D = 2;

int ledState = 0;
int ledOn = false;

// notes in the melody:
int melody[] = {
NOTE_D4, NOTE_E4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_E4,
NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4,

NOTE_D4, NOTE_E4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_F4, 
NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4,

NOTE_A3, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_E4, 
NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4,

NOTE_D4, NOTE_E4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_F4, 
NOTE_G3, NOTE_G3, NOTE_G3, NOTE_G3, NOTE_G3, NOTE_G3, NOTE_G3, NOTE_G3, NOTE_G3,
NOTE_G4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_G4, NOTE_F4,

NOTE_D4, NOTE_C4, NOTE_D4, NOTE_D4, NOTE_C4, NOTE_C4, NOTE_B4, NOTE_B4, NOTE_A4,
NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_D4,

NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_D4,

};


// note durations: 2 = half note, 4 = quarter note, 8 = eighth note, 16 = sixteenth note, etc.:
int noteDurations[] = {
  
4, 2, 2.5, 2, 2.5, 4, 2, 2.75,
2, 3, 5, 4.5, 5, 4.5, 2, 3, 5, 4.5, 5, 3,

4, 2, 2.5, 2, 2.5, 4, 1,
2, 3, 5, 4.5, 5, 4.5, 2, 3, 5, 4.5, 5, 3,

3.75, 4, 2.5, 2, 2.5, 2.5, 4, 2, 2.75,
2, 3, 5, 4.5, 5, 4.5, 2, 3, 5, 4.5, 5, 3, 

4, 2, 2.5, 2, 2.5, 2, 1,
2, 4, 4.5, 4, 4.5, 4, 4.5, 4, 2,
2.5, 4, 2.5, 3, 3.5, 3, 4, 3,

2, 2.75, 2.5, 2, 3, 3.5, 4.5, 2, 2.5,
2.75, 3, 3.5, 3, 3.5, 2.5, 3, 3.5, 3, 2, 4, 2,

4, 4.5, 4, 4.5, 4, 2.5, 3, 3.5, 3, 2, 3, 2,


} ;

void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(BUTTON_A, INPUT);
  digitalWrite(BUTTON_A,HIGH);
  pinMode(BUTTON_G, INPUT);
  digitalWrite(BUTTON_G,HIGH);
  pinMode(BUTTON_F, INPUT);
  digitalWrite(BUTTON_F,HIGH);
  pinMode(BUTTON_E, INPUT);
  digitalWrite(BUTTON_E,HIGH);
  pinMode(BUTTON_D, INPUT);
  digitalWrite(BUTTON_D, HIGH);
  pinMode (buttonSong, INPUT);
  digitalWrite(buttonSong, HIGH);
 
  
  digitalWrite(LED,HIGH);
}


void loop()
{
  
   while(digitalRead(BUTTON_A) == ACTIVATED)
  {
    tone(PIEZO,NOTE_A4);
    digitalWrite(LED,HIGH);
  }
  while(digitalRead(BUTTON_G) == ACTIVATED)
  {
    tone(PIEZO,NOTE_G4);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(BUTTON_F) == ACTIVATED)
  {
    tone(PIEZO,NOTE_F4);
    digitalWrite(LED,HIGH);
  }
  
  while(digitalRead(BUTTON_E) == ACTIVATED)
  {
    tone(PIEZO,NOTE_E4);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(BUTTON_D) == ACTIVATED)
  {
    tone(PIEZO, NOTE_D4);
    digitalWrite(LED,HIGH);
  }
  
  if(digitalRead(buttonSong) == ACTIVATED) {
    for (int thisNote=0; thisNote <85; thisNote++) {
      int noteDuration = 600 / noteDurations[thisNote];
      tone(11, melody[thisNote], noteDuration);
      int pauseBetweenNotes = noteDuration * 1.50;
      delay(pauseBetweenNotes);
      noTone(11);
    }
    
  }

  noTone(PIEZO);
  digitalWrite(LED,LOW);

}
