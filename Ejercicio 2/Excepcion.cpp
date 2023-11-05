#include <iostream>
#include <stdexcept>
using namespace std;
int ExcepcionDivision(int a,int b){
    if (b == 0){
        throw invalid_argument("Division por cero.");
    } else {
        return a/b;
    }
}
int main() {
    try {
        int resultException = ExcepcionDivision(5,0);
    } catch (const invalid_argument& e) {
        cout << "Excepcion: " << e.what() << endl;
    }
    return 0;
}
