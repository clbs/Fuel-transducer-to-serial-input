const int fpVolts = A0;
int fpSignal = 0;
int fpOutput = 0;
int fpFinal = 0;
const int sampleRate = 500; //in milliseconds

void setup() {
    Serial.begin(9600);
    Serial.println("Current Fuel Pressure");
}

void fuelPress() {
  
  fpSignal = analogRead(fpVolts);
  fpOutput = map(fpSignal, 0, 1023, 0, 5000);
  fpFinal = ((fpOutput - 500)/40);
  
  if (fpFinal > 100) {
    Serial.println("Value over range for specificed sensor: " + String(fpFinal) + " psi");    
  }

  else if (fpFinal < 0){
    Serial.println("Value under range for specificed sensor: " + String(fpFinal) + " psi");    
  }
  
  else {
    Serial.println("Fuel Pressure: " + String(fpFinal) + " psi");
  }

}

void loop() {  
  fuelPress();
  delay(sampleRate);

}
