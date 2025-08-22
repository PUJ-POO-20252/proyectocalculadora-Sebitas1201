#include <iostream>
#include "matematicas.h"

int main() {
    int x, y;

    std::cout << "Ingrese el primer numero: ";
    std::cin >> x;

    std::cout << "Ingrese el segundo numero: ";
    std::cin >> y;

    int resultadoDivision = dividir(x, y);
    int resultadoResta = restar(x, y);

    std::cout << "Division: " << resultadoDivision << std::endl;
    std::cout << "Resta: " << resultadoResta << std::endl;

    return 0;
}

