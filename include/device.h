#ifndef DEVICE_H
#define DEVICE_H

class Device {
public:
    virtual void getInfo() = 0;
    virtual void connect() = 0;
};

#endif // DEVICE_H
