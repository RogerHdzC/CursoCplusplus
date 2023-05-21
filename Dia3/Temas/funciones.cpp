#include <iostream>

// Declaración de la función
int suma(int a, int b);

// Definición de la función
int suma(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5;
    int num2 = 3;

    // Uso de la función para realizar una operación
    int resultado = suma(num1, num2);

    // Imprimir el resultado
    std::cout << "El resultado de la suma es: " << resultado << std::endl;

    return 0;
}
