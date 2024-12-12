#include "catch.hpp"
#include "sensor.h"

TEST_CASE("Sensor getInfo Test", "[sensor]") {
    Sensor sensor;
    REQUIRE_NOTHROW(sensor.getInfo());
}

TEST_CASE("Sensor connect Test", "[sensor]") {
    Sensor sensor;
    REQUIRE_NOTHROW(sensor.connect());
}
