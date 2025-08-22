#include <iostream>
#include "matematicas.h"

int main() {
    int x = 10;
    int y = 4;
    int resultadoDivision = dividir(x,y);
    int resultadoResta = restar(x,y);

    std::cout <<"division: " << resultadoDivision << std::endl;
    std::cout <<"resta: " << resultadoResta << std::endl;
    return 0;
}