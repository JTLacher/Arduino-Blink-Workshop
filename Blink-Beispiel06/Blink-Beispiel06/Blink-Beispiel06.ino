/*
  Arduino Blink Beispiel 06
  LEDs an den Ports 12 und 13, LEDs wechseln, 
  wenn der Taster am Eingang 8 gedrückt wurde.
  FabLab Bayreuth Arduino Day 2018 JTL
*/

// Die setup Funktion wird nur einmal beim Start des Programmes ausgeführt
// z.B. wenn der RESET Taster gedrückt wurde oder das Board eingeschatet wurde

void setup() {
  pinMode(12, OUTPUT);    // Deklariere den Port 12, an dem die erste            
                          // LED angeschlossen ist, als Ausgang
  digitalWrite(12, HIGH); // setze Grundstatus AN der ersten LED                  
  pinMode(13, OUTPUT);    // Deklariere den Port 13, an dem die zweite           
                          // LED angeschlossen ist, als Ausgang
  digitalWrite(13, LOW); // setze Grundstatus AUS der zweiten LED
                    
  pinMode(8, INPUT);      // Deklariere den Port 8, an dem der
                          // Taster gegen GND angeschlossen ist, als Eingang
  digitalWrite(8, HIGH);  // Setzt den internen 20 K Ohm Pul-Up Widerstand gegen 5V
                          // So ist der nicht gedrückte Zustand normal HIGH
}


// In der loop Funktion werden alle Anweisungen fortlaufend in einer endlosen Schleife wiederholt.

void loop() {
  // Bedingung wenn der Taster gedrückt wird
  if (digitalRead(8) == LOW){
      digitalWrite(12, !digitalRead(12)); //Wechsle (toggle) den Status der ertsen LED
      digitalWrite(13, !digitalRead(13)); //Wechsle (toggle) den Status der zweiten LED
      delay(200); // Verzögere um 200 ms um den Taster zu entprellen
  }
}
