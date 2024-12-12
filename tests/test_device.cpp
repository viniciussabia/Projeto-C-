#include "catch.hpp"
#include "device.h"

class MockDevice : public Device {
public:
    void getInfo() override {
        // Implementação de mock
    }
    void connect() override {
        // Implementação de mock
    }
};

TEST_CASE("MockDevice getInfo Test", "[device]") {
    MockDevice device;
    REQUIRE_NOTHROW(device.getInfo());
}

TEST_CASE("MockDevice connect Test", "[device]") {
    MockDevice device;
    REQUIRE_NOTHROW(device.connect());
}
