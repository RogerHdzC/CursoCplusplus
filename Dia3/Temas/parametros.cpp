#include <iostream>

// Paso de parámetros por valor
void duplicarValor(int num) {
    num = num * 2;
    std::cout << "Dentro de la función duplicarValor, el valor duplicado es: " << num << std::endl;
}

// Paso de parámetros por referencia
void duplicarReferencia(int& num) {
    num = num * 2;
    std::cout << "Dentro de la función duplicarReferencia, el valor duplicado es: " << num << std::endl;
}

int main() {
    int numero = 5;

    // Paso de parámetros por valor
    std::cout << "Antes de llamar a la función duplicarValor, el valor es: " << numero << std::endl;
    duplicarValor(numero);
    std::cout << "Después de llamar a la función duplicarValor, el valor es: " << numero << std::endl;

    std::cout << std::endl;

    // Paso de parámetros por referencia
    std::cout << "Antes de llamar a la función duplicarReferencia, el valor es: " << numero << std::endl;
    duplicarReferencia(numero);
    std::cout << "Después de llamar a la función duplicarReferencia, el valor es: " << numero << std::endl;

    return 0;
}
