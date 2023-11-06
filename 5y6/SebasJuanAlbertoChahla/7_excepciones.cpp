#include <iostream>
#include <stdexcept>

class RecursoAdquirible {
public:
    RecursoAdquirible() {
        recurso = adquirirRecurso();
        if (recurso == nullptr) {
        }
        std::cout << "Recurso adquirido." << std::endl;
    }

    ~RecursoAdquirible() {
        liberarRecurso();
        std::cout << "Recurso liberado." << std::endl;
    }

private:
    void* adquirirRecurso() {
        return new int[10];
    }

    void liberarRecurso() {
        delete[] reinterpret_cast<int*>(recurso);
    }

    void* recurso;
};

int main() {
    try {
        RecursoAdquirible recurso1;
    } catch (const std::exception& e) {
        std::cerr << "Excepción atrapada: " << e.what() << std::endl;
    }


    return 0;
}
