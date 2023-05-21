#include <iostream>

int main() {
    // Declaración y creación de un arreglo unidimensional
    int numeros[5] = {10, 20, 30, 40, 50};

    // Acceso a los elementos individuales del arreglo utilizando índices
    std::cout << "Acceso a los elementos del arreglo:" << std::endl;
    std::cout << "Elemento en la posición 0: " << numeros[0] << std::endl;
    std::cout << "Elemento en la posición 2: " << numeros[2] << std::endl;

    std::cout << std::endl;

    // Utilización de bucles y condicionales para recorrer y procesar los elementos del arreglo
    std::cout << "Recorrido y procesamiento de los elementos del arreglo:" << std::endl;
    for (int i = 0; i < 5; i++) {
        // Ejemplo de búsqueda de un elemento en el arreglo
        if (numeros[i] == 30) {
            std::cout << "Se encontró el número 30 en la posición " << i << std::endl;
        }

        // Ejemplo de cálculo estadístico (suma de todos los elementos)
        int suma = 0;
        for (int j = 0; j <= i; j++) {
            suma += numeros[j];
        }
        std::cout << "Suma de los primeros " << (i + 1) << " elementos: " << suma << std::endl;
    }

    return 0;
}
