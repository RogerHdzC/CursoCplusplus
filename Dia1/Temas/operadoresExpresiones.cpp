#include <iostream>

int main() {
    // Operadores aritméticos
    int a = 10;
    int b = 3;

    int suma = a + b;
    int resta = a - b;
    int multiplicacion = a * b;
    double division = static_cast<double>(a) / b;  // Conversión de tipos para obtener resultado decimal
    int modulo = a % b;

    std::cout << "Suma: " << suma << std::endl;
    std::cout << "Resta: " << resta << std::endl;
    std::cout << "Multiplicación: " << multiplicacion << std::endl;
    std::cout << "División: " << division << std::endl;
    std::cout << "Módulo: " << modulo << std::endl;

    // Operadores de asignación
    int x = 5;
    x += 3;  // Equivalente a x = x + 3;
    x -= 2;  // Equivalente a x = x - 2;
    x *= 4;  // Equivalente a x = x * 4;
    x /= 2;  // Equivalente a x = x / 2;

    std::cout << "Valor final de x: " << x << std::endl;

    // Operadores de comparación
    int p = 10;
    int q = 7;

    bool igual = (p == q);
    bool distinto = (p != q);
    bool menor = (p < q);
    bool mayor = (p > q);
    bool menorOigual = (p <= q);
    bool mayorOigual = (p >= q);

    std::cout << "Igual: " << igual << std::endl;
    std::cout << "Distinto: " << distinto << std::endl;
    std::cout << "Menor: " << menor << std::endl;
    std::cout << "Mayor: " << mayor << std::endl;
    std::cout << "Menor o igual: " << menorOigual << std::endl;
    std::cout << "Mayor o igual: " << mayorOigual << std::endl;

    // Operadores lógicos
    bool condicion1 = true;
    bool condicion2 = false;

    bool resultadoAnd = condicion1 && condicion2;
    bool resultadoOr = condicion1 || condicion2;
    bool resultadoNot = !condicion1;

    std::cout << "Resultado AND: " << resultadoAnd << std::endl;
    std::cout << "Resultado OR: " << resultadoOr << std::endl;
    std::cout << "Resultado NOT: " << resultadoNot << std::endl;

    return 0;
}
