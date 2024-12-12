#ifndef ACTUATOR_H
#define ACTUATOR_H

#include "device.h"

class Actuator : public Device {
public:
    void getInfo() override;
    void connect() override;
};

#endif // ACTUATOR_H
