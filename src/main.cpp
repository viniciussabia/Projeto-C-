#include <iostream>
#include "sensor.h"
#include "actuator.h"

int main() {
    Sensor tempSensor;
    Actuator lightActuator;

    tempSensor.getInfo();
    tempSensor.connect();

    lightActuator.getInfo();
    lightActuator.connect();

    return 0;
}
