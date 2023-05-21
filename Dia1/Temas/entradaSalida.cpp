#include <iostream>

int main() {
    // Salida de datos utilizando std::cout
    std::cout << "Hola, este es un programa de ejemplo." << std::endl;
    std::cout << "Por favor ingresa tu nombre: ";

    // Entrada de datos utilizando std::cin
    std::string nombre;
    std::cin >> nombre;

    std::cout << "¡Hola, " << nombre << "! Bienvenido al programa." << std::endl;

    return 0;
}
