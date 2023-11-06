#include <iostream>

bool errorFlag = false;

int divide(int a, int b) {
    if (b == 0) {
    errorFlag = true;
    return 0;
    }
    else {
        return a / b ;
    }
}
int main () {
    int result = divide(6,0);
    if(errorFlag) {
        std::cerr << "Ha ocurrido un error, operacion por cero." << std::endl;
        errorFlag = false;
    }
    return 0;
}