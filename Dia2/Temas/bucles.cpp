#include <iostream>

int main() {
    // Ejemplo de uso del bucle "for"
    std::cout << "Bucle for:" << std::endl;
    for (int i = 1; i <= 5; i++) {
        std::cout << "Iteración: " << i << std::endl;
    }

    std::cout << std::endl;

    // Ejemplo de uso del bucle "while"
    std::cout << "Bucle while:" << std::endl;
    int contador = 1;
    while (contador <= 5) {
        std::cout << "Iteración: " << contador << std::endl;
        contador++;
    }

    std::cout << std::endl;

    // Ejemplo de control de flujo con "break"
    std::cout << "Control de flujo con break:" << std::endl;
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            break; // Se detiene el bucle cuando i es igual a 6
        }
        std::cout << "Iteración: " << i << std::endl;
    }

    std::cout << std::endl;

    // Ejemplo de control de flujo con "continue"
    std::cout << "Control de flujo con continue:" << std::endl;
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; // Se salta la iteración cuando i es igual a 3
        }
        std::cout << "Iteración: " << i << std::endl;
    }

    return 0;
}
