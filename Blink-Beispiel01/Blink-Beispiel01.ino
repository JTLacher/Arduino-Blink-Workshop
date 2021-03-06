/*
  Arduino Blink Beispiel 01
  LED am Port 13 blinken lassen
  FabLab Bayreuth Arduino Day 2018 JTL
*/


// Die setup Funktion wird nur einmal beim Start des Programmes ausgeführt
// z.B. wenn der RESET Taster gedrückt wurde oder das Board eingeschatet wurde

void setup() {
  pinMode(13, OUTPUT);    // Deklariere den Port, an dem die LED            
                          // angeschlossen ist, als Ausgang
}


// In der loop Funktion werden alle Anweisungen fortlaufend in einer endlosen Schleife wiederholt.

void loop() {
  digitalWrite(13, HIGH); // Schalte die LED an
  delay(1000);  // Warte 1000 ms

  digitalWrite(13, LOW); // Schalte die LED aus
  delay(1000);  // Warte 1000 ms
}
