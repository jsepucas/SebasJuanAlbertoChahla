#include <iostream>
using namespace std;
int ErrorDivision (int a, int b){
   if (b == 0){
       return -1;
   } else {
       return a / b;
   }
}
int main() {
    int resultadoError = ErrorDivision (5,0);
    if (resultadoError == -1){
        cout << "Error: Division por cero." << endl;
    }
}




