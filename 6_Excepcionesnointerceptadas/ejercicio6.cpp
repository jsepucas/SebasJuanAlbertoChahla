#include "ejercicio6.h"
#include <iostream>
#include <stdexcept>

void lanzaExcepcion2() {
    throw std::runtime_error("Excepcion no capturada");
}
