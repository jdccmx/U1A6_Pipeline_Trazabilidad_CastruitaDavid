# Checklist de Reproducibilidad

[X] Código disponible
[X] Datos raw disponibles
[X] Datos procesados disponibles
[X] README con instrucciones
[X] Hardware documentado
[X] Frecuencia de muestreo documentada
[X] Versiones registradas

Resultado: REPRODUCIBLE

# 1. Orden de ejecución

Seguir los pasos en este orden:

1. Conectar el Arduino Uno a la PC mediante USB.
2. Abrir Arduino IDE.
3. Cargar el archivo:

   code/U1A5_code.ino 

4. Seleccionar:

   Tools → Board → Arduino Uno  
   Tools → Port → COMx (puerto correspondiente)

5. Subir el programa al Arduino.
6. Abrir Node-RED desde el navegador:

   http://localhost:1880

7. Importar el flujo:

   code/U1A5_CastruitaDavid.json

8. Hacer clic en "Deploy".

9. Abrir el Dashboard:

   http://localhost:1880/ui
   
# 2. Parámetros utilizados

Parámetros del sistema:

- Frecuencia de muestreo: 10 Hz
- Puerto serial: COM3 (revisar el puerto correcto si se requiere)
- Baud rate: 9600
- Resolución ADC: 10 bits (0–1023)
- Rango de voltaje: 0–5 V
- Formato de salida: CSV

Archivo generado en la carpeta especificada por el usuario:

data_raw_processed/U1A5_CastruitaDavid.csv

# 3. Qué se espera observar

Resultados esperados:

- El dashboard muestra una gráfica en tiempo real.
- La gráfica se actualiza constantemente.
- Los valores están en rango de 0 a 1023.
- Se genera un archivo CSV automáticamente.
- El archivo CSV contiene más de 300 muestras después de 30 segundos.
 
