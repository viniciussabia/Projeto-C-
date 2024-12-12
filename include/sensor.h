#ifndef SENSOR_H
#define SENSOR_H

#include "device.h"

class Sensor : public Device {
public:
    void getInfo() override;
    void connect() override;
};

#endif // SENSOR_H
