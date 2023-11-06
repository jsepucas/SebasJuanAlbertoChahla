#include "ejercicio5.h"
#include <iostream>
#include <stdexcept>

void lanzaExcepcion1() {
    try {
        throw std::runtime_error("Error en la funcion lanzaExcepcion1");
    }
    catch (const std::runtime_error& e) {
        std::cout << "Excepcion 1 capturada y manejada. Reactivando..." << std::endl;
        throw;
    }
}
