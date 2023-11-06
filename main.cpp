#include <iostream>
#include "ejercicio5.h"
#include "ejercicio6.h"

int main() {
    try {
        lanzaExcepcion1();
    }
    catch (const std::runtime_error &e) {
        std::cout << "Excepcion 1 manejada en el programa principal: " << e.what() << std::endl;
    }
    try {
        lanzaExcepcion2();
    }
    catch (const std::runtime_error& e) {
        std::cout << "Excepcion 2 manejada en el programa principal: " << e.what() << std::endl;
    }

    return 0;
}
