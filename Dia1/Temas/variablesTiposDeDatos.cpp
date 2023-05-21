#include <iostream>

int main() {
    // Variables de diferentes tipos de datos
    int edad = 25;
    double altura = 1.75;
    char inicial = 'J';
    bool esEstudiante = true;

    // Mostrar los valores de las variables
    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Altura: " << altura << std::endl;
    std::cout << "Inicial: " << inicial << std::endl;
    std::cout << "¿Es estudiante?: " << esEstudiante << std::endl;

    // Realizar operaciones con las variables
    int edadDentroDe5Anios = edad + 5;
    double alturaDoble = altura * 2;

    // Mostrar los resultados de las operaciones
    std::cout << "Edad dentro de 5 años: " << edadDentroDe5Anios << std::endl;
    std::cout << "Altura doble: " << alturaDoble << std::endl;

    return 0;
}
