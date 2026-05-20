#include <iostream>
#include "alert.h"

using namespace std;

void Alert::showHelmetWarning() {
    cout << "[ALERT] Please wear helmet!\n";
}

void Alert::showAccidentAlert() {
    cout << "[ALERT] Accident detected!\n";
}
