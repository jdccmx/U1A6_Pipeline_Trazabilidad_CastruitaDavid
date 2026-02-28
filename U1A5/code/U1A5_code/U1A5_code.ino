void setup() {
  Serial.begin(9600);
}

void loop() {
  int s1=analogRead(A0);
  int s2=analogRead(A1);
  Serial.print(millis());
  Serial.print(",");
  Serial.print(s1);
  Serial.print(",");
  Serial.println(s2);
  delay(200);
}
