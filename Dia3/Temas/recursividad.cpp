#include <iostream>

int factorial(int n) {
    // Caso base: factorial de 0 es 1
    if (n == 0) {
        return 1;
    }
    // Caso recursivo: n * factorial(n-1)
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int numero;
    std::cout << "Ingrese un número: ";
    std::cin >> numero;

    int resultado = factorial(numero);

    std::cout << "El factorial de " << numero << " es: " << resultado << std::endl;

    return 0;
}
