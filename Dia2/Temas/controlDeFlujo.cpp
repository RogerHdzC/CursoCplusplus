#include <iostream>

int main() {
    int edad;
    std::cout << "Ingrese su edad: ";
    std::cin >> edad;

    // Ejemplo de uso de la estructura "if"
    if (edad >= 18) {
        std::cout << "Eres mayor de edad." << std::endl;
    } else {
        std::cout << "Eres menor de edad." << std::endl;
    }

    // Ejemplo de uso de la estructura "switch"
    char opcion;
    std::cout << "Ingrese una opción (A, B o C): ";
    std::cin >> opcion;

    switch (opcion) {
        case 'A':
            std::cout << "Ha seleccionado la opción A." << std::endl;
            break;
        case 'B':
            std::cout << "Ha seleccionado la opción B." << std::endl;
            break;
        case 'C':
            std::cout << "Ha seleccionado la opción C." << std::endl;
            break;
        default:
            std::cout << "Opción inválida." << std::endl;
            break;
    }

    return 0;
}
