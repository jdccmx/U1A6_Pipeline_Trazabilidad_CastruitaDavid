# Metadata del Pipeline de Telemetría

Proyecto: U1A6 Pipeline de Trazabilidad  
Autor: Juan David Castruita  
Fecha: 28/02/2026  

---

# 1. Sensor / Módulo utilizado

Sensor: Sensor analógico de linea IR
Modelo: Genérico analógico  
Tipo de señal: Analógica (voltaje)

Características:

- Tipo de salida: Voltaje analógico
- Rango de salida: 0 – 5 V
- Resolución de adquisición: 10 bits (0–1023)
- Método de adquisición: ADC interno del Arduino

Pin utilizado:

A0 y A1

---

# 2. Frecuencia de muestreo

Frecuencia configurada: 10 Hz

Esto significa:

- 10 muestras por segundo
- Periodo de muestreo: 100 ms

Configurado en el código Arduino mediante:

delay(100);

---

# 3. Canal de telemetría

Canal utilizado: USB (Serial)

Tipo de comunicación:

Serial UART por USB

Configuración:

- Baud rate: 9600
- Puerto: COM3
- Formato de datos: CSV

Formato del mensaje:

timestamp,adc_value

Ejemplo:

1700000000,523  
1700000001,525  

---

# 4. Plataforma de adquisición y procesamiento

Dispositivo de adquisición:

Arduino Uno

Características relevantes:

- ADC de 10 bits
- Comunicación serial USB
- Microcontrolador ATmega328P

PC utilizada:

Sistema operativo: Windows 10  
Arquitectura: 64 bits  

Función de la PC:

- Recepción de datos
- Visualización
- Almacenamiento en CSV

---

# 5. Herramienta de dashboard y visualización

Herramienta utilizada:

Node-RED Dashboard

Funciones:

- Visualización en tiempo real
- Procesamiento de datos
- Almacenamiento en archivo CSV
- Calibración de sensores

Nodos utilizados:

- serial in
- function
- chart
- debug (comprobación)
- file
- ui_chart

# 6. Dependencias del sistema

Software requerido:

Arduino IDE  
Node-RED  
Node.js  

Dependencias Node-RED:

node-red-dashboard  
node-red-node-serialport  

---

# 7. Flujo del pipeline

Sensor → Arduino ADC → Serial USB → Node-RED → Dashboard → Archivo CSV

---

# 8. Ubicación de archivos relacionados

Código fuente:

code/U1A5_code.ino

Datos crudos:

data_raw_processed/U1A5_CastruitaDavid.csv  

Datos procesados:

data_raw:processed/U1A5_CastruitaDavid.csv

---

# 9. Estado del pipeline

Estado actual: FUNCIONAL  

Capacidades verificadas:

Lectura de sensor  
Transmisión serial  
Visualización en tiempo real  
Almacenamiento en CSV  

---

# 10. Propósito del pipeline

Permitir la adquisición, transmisión, visualización y almacenamiento de datos de sensores analógicos, garantizando trazabilidad y reproducibilidad.
