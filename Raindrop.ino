#define sensor_DO A0

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  
}

void loop() {

  int val = digitalRead(sensor_DO);
  Serial.print("Digital Output: ");
  Serial.print(val);

  if (val == 1) {
    Serial.println("   Status: Dry");
  } else {
    Serial.println("   Status: Wet");
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);
  }

  delay(1000);
} 
