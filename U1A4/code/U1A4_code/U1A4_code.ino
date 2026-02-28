/*
* U1A4: Adquisición para Node-RED
* Formato de Salida: JSON {"t": timestamp, "r": raw, "f": filtered}
* Baudrate: 115200
*/
#include <Arduino.h>
const int sensorPin = A0;
unsigned long lastTime = 0;
const int sampleTime = 20; // 50 Hz (Cumple requisito >20Hz)
// Filtro Pasa-Bajas (IIR)
float filteredValue = 0;
float alpha = 0.2; 

void setup() {
 Serial.begin(115200); // Velocidad rápida
}
void loop() {
 if (millis() - lastTime >= sampleTime) {
 lastTime = millis();
 // 1. Adquisición
 int raw = analogRead(sensorPin);
 // 2. Preprocesado
 filteredValue = (alpha * raw) + ((1.0 - alpha) * filteredValue);
 // 3. Empaquetado JSON para Node-RED
 // Serial.print es más eficiente que String()
 Serial.print("{\"t\":");
 Serial.print(lastTime);
 Serial.print(",\"r\":");
 Serial.print(raw);
 Serial.print(",\"f\":");
 Serial.print(filteredValue);
 Serial.println("}"); // Cerramos llave y salto de línea
 }
}
