/*
  Arduino Blink Beispiel 02
  LEDs an den Ports 12 und 13 blinken lassen
  FabLab Bayreuth Arduino Day 2018 JTL
*/


// Die setup Funktion wird nur einmal beim Start des Programmes ausgeführt
// z.B. wenn der RESET Taster gedrückt wurde oder das Board eingeschatet wurde

void setup() {
  pinMode(12, OUTPUT);    // Deklariere den Port 12, an dem die erste            
                          // LED angeschlossen ist, als Ausgang
  pinMode(13, OUTPUT);    // Deklariere den Port 13, an dem die zweite            
                          // LED angeschlossen ist, als Ausgang                          
}


// In der loop Funktion werden alle Anweisungen fortlaufend in einer endlosen Schleife wiederholt.

void loop() {
  digitalWrite(12, HIGH); // Schalte die erste LED an
  digitalWrite(13, LOW); // Schalte die zweite LED aus  
  delay(1000);  // Warte 1000 ms

  digitalWrite(12, LOW); // Schalte die erste LED aus
  digitalWrite(13, HIGH); // Schalte die zweite LED an
  delay(1000);  // Warte 1000 ms
}
