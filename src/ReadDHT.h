#include <Arduino.h>
#include "DHT.h"

#define DHTPIN 4
#define DHTTYPE DHT11

class ReadDHT
{
    DHT dht;

public:
    ReadDHT() : dht(DHTPIN, DHTTYPE)
    {
        dht.begin();
    }

    int KelembabanUdara()
    {
        float humidity = dht.readHumidity();
        return humidity;
    }

    int SuhuUdara()
    {
        float temp = dht.readTemperature();
        return temp;
    }
};