/*
  Arduino Blink Beispiel 04
  LEDs an den Ports 10 und 11, PWM Stufen
  FabLab Bayreuth Arduino Day 2018 JTL
*/


// Die setup Funktion wird nur einmal beim Start des Programmes ausgeführt
// z.B. wenn der RESET Taster gedrückt wurde oder das Board eingeschatet wurde

void setup() {
  pinMode(10, OUTPUT);    // Deklariere den Port 10, an dem die erste            
                          // LED angeschlossen ist, als Ausgang
  pinMode(11, OUTPUT);    // Deklariere den Port 11, an dem die zweite            
                          // LED angeschlossen ist, als Ausgang                          
}


// In der loop Funktion werden alle Anweisungen fortlaufend in einer endlosen Schleife wiederholt.

void loop() {
  delay(1000); // Warte 1000 ms
  analogWrite(10, 255); // Schalte die erste LED ganz an
  analogWrite(11, 255); // Schalte die zweite LED ganz an

  delay(1000); // Warte 1000 ms
  analogWrite(10, 120); // Schalte die erste LED mit nur 120 an
  analogWrite(11, 60); // Schalte die zweite LED mit nur 60 an  

  delay(1000); // Warte 1000 ms
  analogWrite(10, 200); // Schalte die erste LED mit nur 200 an
  analogWrite(11, 30); // Schalte die zweite LED mit nur 30 an  

  delay(1000); // Warte 1000 ms
  analogWrite(10, 50); // Schalte die erste LED mit nur 50 an
  analogWrite(11, 88); // Schalte die zweite LED mit nur 88 an  
}
