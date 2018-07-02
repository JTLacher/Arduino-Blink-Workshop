/*
  Arduino Blink Beispiel 05
  LEDs an den Ports 10 und 11, PWM Stufen schwellen
  FabLab Bayreuth Arduino Day 2018 JTL
*/


// Die setup Funktion wird nur einmal beim Start des Programmes ausgeführt
// z.B. wenn der RESET Taster gedrückt wurde oder das Board eingeschatet wurde

void setup() {
  pinMode(10, OUTPUT);    // Deklariere den Port 10, an dem die erste            
                          // LED angeschlossen ist, als Ausgang
}


// In der loop Funktion werden alle Anweisungen fortlaufend in einer endlosen Schleife wiederholt.

void loop() {
  // Dimme die erste LED von 0 auf 255
  for (int i=0; i<255; i++){
  analogWrite(10, i); // Schalte die erste LED auf den aktuellen Wert von i
  delay(10); // Verzögere um 10 ms
  }
  
  // Dimme die erste LED von 255 auf 0
  for (int x=255; x>0; x--){
  analogWrite(10, x); // Schalte die erste LED auf den aktuellen Wert von x
  delay(10); // Verzögere um 10 ms
  }
}
