#include <SoftwareSerial.h>
SoftwareSerial mySerial(10, 11); // RX, TX

  char c;

void setup() {
  Serial.begin(38400);
 // dht.begin();
 mySerial.begin(38400);
}

void loop()
{
if(mySerial.available())
  {
   c = mySerial.read();

   if(c=='a')
 { mySerial.print("y");
   //readSensor();
  }
 else    if(c=='b')
 { mySerial.print("m");
   //readSensor();
  }
else     if(c=='c')
 { mySerial.print("d");
   //readSensor();
  }
mySerial.print("c");
delay(1000);
}
}
void readSensor() {
/*  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  float hic = dht.computeHeatIndex(t, h, false);

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print(" *C ");
  Serial.print("Heat index: ");
  */
  Serial.print("654");
  Serial.print(" *C ");


  //link : http://www.electronics-lab.com/get-sensor-data-arduino-smartphone-via-bluetooth/
}
