/*
  Arduino Blink Beispiel 03
  LEDs an den Ports 10 und 11, PWM am Port 11
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
  analogWrite(10, 255); // Schalte die erste LED als Referenz ganz an
  analogWrite(11, 60); // Schalte die zweite LED mit nur 60 an  
}
