#include <Adafruit_Sensor.h>

#include <DHT.h>     //Librerias de manejo del transmisor DHT11 termohigrómetro
#include <DHT_U.h>

int PIN_SENSOR = 22; //Pin digital de comunicaciones 22 en el MEGA 2560

int temperatura;     //Variable donde se va a leer la temperatura del transmisor
int humedad;         //Variable donde se va a leer la humedad del transmisor

DHT DHTSensor(PIN_SENSOR,DHT11);


void setup() {
  // Este código solo se ejecuta una vez
  Serial.begin(9600);
  DHTSensor.begin();  //Se inicializa el sensor
}

void loop() {
  humedad = DHTSensor.readHumidity();
  temperatura = DHTSensor.readTemperature();

  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.print("ºC Humedad: ");
  Serial.print(humedad);
  Serial.println("%RH");

  delay(5000);
}
