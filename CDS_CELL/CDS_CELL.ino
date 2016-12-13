#define SENSOR 0

void setup() {
  pinMode(SENSOR, INPUT);
  Serial.begin(9600);
}

void loop() {
  int i; // 0 - 1023
  i = analogRead(SENSOR); // 0 - 1023
  Serial.print(i, DEC);
  Serial.print("\n");
  delay(1000);
}
