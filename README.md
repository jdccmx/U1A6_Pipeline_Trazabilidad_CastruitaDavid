# U1A6_Pipeline_Trazabilidad_CastruitaDavid

Autor:  Juan David Castruita

## Descripción

Este repositorio implementa un pipeline de adquisición de datos usando el microcontrolador Arduino Uno, sensores de línea IR y Node-RED.

El sistema se describe como:

Sensor → Arduino → Serial → Node-RED → CSV

## Estructura

/code → Código fuente
/data_raw_processed → Datos crudos y procesados
/docs → Evidencia y capturas de diagramas, dashboard, interfaz grafica.

## Cómo ejecutar

1. Conectar Arduino Uno y sensores de linea.
2. Cargar U1A4_code.ino o U1A5_code.ino
3. Ejecutar Node-RED
4. Abrir dashboard
5. Los datos se guardan en CSV

## Hardware usado

Arduino Uno
Sensor de linea analógico

## Frecuencia de muestreo

10 Hz
