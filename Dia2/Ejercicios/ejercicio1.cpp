#include <iostream>

int main() {
    int numero;
    std::cout << "Ingrese un número: ";
    std::cin >> numero;

    int contador = 0;
    while (contador <= numero) {
        if (contador % 2 == 0) {
            std::cout << contador << " ";
        }
        contador++;
    }

    std::cout << std::endl;

    return 0;
}
