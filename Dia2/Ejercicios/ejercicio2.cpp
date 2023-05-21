#include <iostream>

int main() {
    const int TAMANIO = 5;
    int numeros[TAMANIO];
    int suma = 0;

    for (int i = 0; i < TAMANIO; i++) {
        std::cout << "Ingrese un número: ";
        std::cin >> numeros[i];
        suma += numeros[i];
    }

    std::cout << "La suma de los números es: " << suma << std::endl;

    return 0;
}
