/*
  Arduino Blink Beispiel 07
  LEDs an den Ports 10 und 11, PWM schwellen abwechselnd
  bis der Taster am Eingang 8 gedrückt wurde, dann blinken die LEDs
  20 mal abwechselnd und die interne LED leuchtet.
  FabLab Bayreuth Arduino Day 2018 JTL
*/

int umgekehrt;
int Taste = 0;

// Die setup Funktion wird nur einmal beim Start des Programmes ausgeführt
// z.B. wenn der RESET Taster gedrückt wurde oder das Board eingeschatet wurde

void setup() {
  pinMode(10, OUTPUT);    // Deklariere den Port 10, an dem die erste            
                          // LED angeschlossen ist, als Ausgang
  pinMode(11, OUTPUT);    // Deklariere den Port 11, an dem die zweite           
                          // LED angeschlossen ist, als Ausgang
  pinMode(13, OUTPUT);    // Deklariere den Port 13, an dem die interne           
                          // LED auf dem Arduino UNO angeschlossen ist, als Ausgang
  digitalWrite(13, LOW);  // Lösche die interne LED
                     
  pinMode(8, INPUT);      // Deklariere den Port 8, an dem der
                          // Taster gegen GND angeschlossen ist, als Eingang
  digitalWrite(8, HIGH);  // Setzt den internen 20 K Ohm Pul-Up Widerstand gegen 5V
                          // So ist der nicht gedrückte Zustand normal HIGH
}


// In der loop Funktion werden alle Anweisungen fortlaufend in einer endlosen Schleife wiederholt.

void loop() {
  // Dimme die erste LED von 0 auf 255
  for (int i=0; i<255; i++){
  analogWrite(10, i); // Schalte die erste LED auf den aktuellen Wert von i
  umgekehrt = 255 - i; // ziehe den aktuellen Wert i vom Maximum ab
  analogWrite(11, umgekehrt); // Schalte die zweite LED auf den aktuellen Wert von umgekehrt 
  if (digitalRead(8) == LOW){
    i = 255;
    Taste = 1;
  }
   delay(5); // Verzögere um 5 ms
  }
  
  // Dimme die erste LED von 255 auf 0
  for (int i=255; i>0; i--){
  analogWrite(10, i); // Schalte die erste LED auf den aktuellen Wert von i
  umgekehrt = 255 - i; // ziehe den aktuellen Wert i vom Maximum ab
  analogWrite(11, umgekehrt); // Schalte die zweite LED auf den aktuellen Wert von umgekehrt
  
    if (digitalRead(8) == LOW){
    i = 0;
    Taste = 1;
  }
  delay(5); // Verzögere um 5 ms
  }
  if (Taste == 1){
    digitalWrite(13, HIGH);
    for (int z=20; z>0; z--){
    analogWrite(10, 255); // Schalte die erste LED an
    analogWrite(11, 0); // Schalte die zweite LED aus  
    delay(500);  // Warte 500 ms

    analogWrite(10, 0); // Schalte die erste LED aus
    analogWrite(11, 255); // Schalte die zweite LED an
    delay(500);  // Warte 500 ms
    }
    digitalWrite(13, LOW);
    Taste = 0;
  }
}
