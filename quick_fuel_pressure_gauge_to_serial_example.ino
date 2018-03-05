const int fpVolts = A0;
int fpSignal = 0;
int fpOutput = 0;
int fpFinal = 0;

void setup() {
    Serial.begin(9600);
    Serial.println("Current Fuel Pressure");
}

void fuelPress() {
  fpSignal = analogRead(fpVolts);
  fpOutput = map(fpSignal, 0, 1023, 0, 5000);
  fpFinal = ((fpOutput - 500)/40);
  if (fpFinal >= 100 || fpFinal <= 0) {
    Serial.println("Value out of range for specificed sensor: " + String(fpFinal) + " psi");    
  }
  else {
    Serial.println(fpFinal + " psi");
  }

}

void loop() {
  
  fuelPress();
  delay(10);

}
