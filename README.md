# sensorDTH11_051019
Código en arduino para la lectura de temperatura y humedad del sensor DHT11

Para ejecutar este código requieres Arduino.
Este programa se probo en una placa arduino mega 2560
Se usó el sensor DHT11 de humedad y temperatura

Conexión:
Arduino (5V)    ->  DHT11 (+)
Arduino (GND)   ->  DHT11 (-)
Arduino (22)    ->  DHT11 (s)

Para la ejecución es necesario instalar las librerias:

Adafruit_sensor.h
#include <DHT.h>
#include <DHT_U.h>
