#include <iostream>
#include "controller.h"
#include "alert.h"

using namespace std;

void Controller::process(bool helmetWorn, bool impactDetected) {
    Alert alert;

    cout << "Helmet Worn: " << (helmetWorn ? "YES" : "NO") << endl;
    cout << "Impact Detected: " << (impactDetected ? "YES" : "NO") << endl;

    if (!helmetWorn) {
        alert.showHelmetWarning();
    }

    if (impactDetected) {
        alert.showAccidentAlert();
    }
}
