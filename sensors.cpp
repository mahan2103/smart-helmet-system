
#include "sensors.h"
#include <cstdlib>

bool Sensors::isHelmetWorn() {
    return rand() % 2;  // 0 = not worn, 1 = worn
}

bool Sensors::detectImpact() {
    return rand() % 2;  // simulate accident detection
}
                                                                                                                                 


