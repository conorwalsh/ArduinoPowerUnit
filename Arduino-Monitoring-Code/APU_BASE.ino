#define Z1 1000.0
#define Z2 1000.0

const int batteryLed = 2;

void setup() {
   pinMode(batteryLed, OUTPUT);
   digitalWrite(batteryLed, LOW);
}

void loop() {
  //The arduino uses a voltage divider to measure the voltage of the batteries used in the event of a power cut
  //Measure the voltage of the 9V (Arduino) battery
  float batVout = analogRead(A0) * (5.0/1023.0);
  float batVin = (Z1 + Z2)/(Z2) * batVout;
  //If the battery voltage is <=2V turn on the 9V battery low LED
  if(batVin<=2){
    digitalWrite(batteryLed, HIGH);
  }
  //If the battery voltage >2V turn off the 9V battery low LED
  else if(batVin>2){
    digitalWrite(batteryLed, LOW);
  }

  delay(500);
}
