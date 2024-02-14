#include <iostream>

int main() {
    volatile int sensorValue = 0;

    while (true) {
        // Read sensor value (may change unexpectedly)
        sensorValue = readSensor();

        // Process sensor value
        std::cout << "Sensor value: " << sensorValue << std::endl;
    }

    return 0;
}
