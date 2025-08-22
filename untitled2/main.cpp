#include <iostream>
#include "matematicas.h"

int main() {
    int x = 10;
    int y = 4;
    int resultadoSuma = sumar(x,y);
    int resultadoResta = restar(x,y);

    std::cout <<"suma: " << resultadoSuma << std::endl;
    std::cout <<"resta: " << resultadoResta << std::endl;
    return 0;
}