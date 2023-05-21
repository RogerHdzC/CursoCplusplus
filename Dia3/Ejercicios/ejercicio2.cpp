#include <iostream>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int limite;
    std::cout << "Ingrese el límite de la serie de Fibonacci: ";
    std::cin >> limite;

    std::cout << "Serie de Fibonacci hasta " << limite << ":" << std::endl;

    for (int i = 0; i <= limite; i++) {
        std::cout << fibonacci(i) << " ";
    }

    std::cout << std::endl;

    return 0;
}
