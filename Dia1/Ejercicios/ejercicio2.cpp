#include <iostream>

int main() {
    float base, altura;
    std::cout << "Ingrese la base del triángulo: ";
    std::cin >> base;
    std::cout << "Ingrese la altura del triángulo: ";
    std::cin >> altura;

    float area = (base * altura) / 2;
    std::cout << "El área del triángulo es: " << area << std::endl;

    return 0;
}
