#include <iostream>
#include "sensors.h"
#include "controller.h"

using namespace std;

int main() {
    Sensors sensors;
    Controller controller;

    cout << "🪖 Smart Helmet Safety System\n\n";

    for (int i = 0; i < 3; i++) {
        bool helmet = sensors.isHelmetWorn();
        bool impact = sensors.detectImpact();

        controller.process(helmet, impact);

        cout << "-----------------------------\n";
    }

    return 0;
}
