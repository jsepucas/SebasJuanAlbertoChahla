#include <iostream>
#include <stdexcept>

void funcion3() {
    throw std:: runtime_error("Error en funcion3");
}

void funcion2() {
    funcion3();

}

void funcion1() {
     funcion2();
}

int main() {
    try{
        funcion1();
    }
    catch(const std::runtime_error& e) {
        std::cout << "Excepcion capturada en main: " << e.what() <<std::endl;

    }

    return 0;
}


