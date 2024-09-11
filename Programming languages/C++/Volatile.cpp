/*
In C++, the volatile keyword is used to indicate that a variable's value may be changed by external factors that the compiler cannot predict, such as hardware registers or concurrent threads.
This keyword tells the compiler not to optimize code involving that variable, ensuring that every access to it reflects its most current value.
*/

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
