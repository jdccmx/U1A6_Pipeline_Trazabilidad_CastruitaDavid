# Bitácora de Ingeniería

Autor: David Castruita  
Proyecto: U1A6 Pipeline de Trazabilidad  

---

## Entrada 1

**Fecha/Hora:** 18/02/2026 12:35 (UTC-6)

**Actividad:** Configuración inicial del Arduino y lectura del sensor analógico.

**Decisión técnica:** Se utilizó el ADC interno del Arduino con resolución de 10 bits (0–1023) por ser suficiente para el rango del sensor.

**Resultado/Evidencia:** Se reciben valores según la detección de negro o blanco en el monitor serial.

**Siguiente acción:** Enviar los datos hacia Node-RED.

---

## Entrada 2

**Fecha/Hora:** 23/02/2026 19:10 (UTC-6)

**Actividad:** Implementación de comunicación serial con Node-RED.

**Decisión técnica:** Se eligió comunicación serial por su simplicidad y compatibilidad directa.

**Resultado/Evidencia:** Node-RED recibe correctamente los datos.

**Siguiente acción:** Guardar los datos en archivo CSV generado en una carpeta especificada.

---

## Entrada 3

**Fecha/Hora:** 25/02/2026 12:37 (UTC-6)

**Actividad:** Configuración de guardado en CSV.

**Decisión técnica:** Se utilizó formato CSV por su facilidad de análisis en Excel y Python.

**Resultado/Evidencia:** Archivo CSV generado correctamente con timestamps.

**Siguiente acción:** Implementar visualización en dashboard.

---

## Entrada 4

**Fecha/Hora:** 25/02/2026 14:20 (UTC-6)

**Actividad:** Creación de dashboard en Node-RED.

**Decisión técnica:** Se utilizó nodo chart para visualizar datos en tiempo real.

**Resultado/Evidencia:** Gráfica muestra datos en tiempo real.

**Siguiente acción:** Implementar calibración mediante botones en el dashboard.

---

## Entrada 5

**Fecha/Hora:** 25/02/2026 14:45 (UTC-6)

**Actividad:** Implementación de calibración min/max.

**Decisión técnica:** Se usa calibración para estabilizar la gráfica producida. 

**Resultado/Evidencia:** Valores de negro/blanco calibrados correctamente.

**Siguiente acción:** Documentar resultados.

---

## Entrada 6

**Fecha/Hora:** 27/02/2026 22:10 (UTC-6)

**Actividad:** Organización del repositorio.

**Decisión técnica:** Se proporcionan archivos y markdown informativo.

**Resultado/Evidencia:** Repositorio estructurado correctamente.

**Siguiente acción:** Crear versiones y CHANGELOG.
