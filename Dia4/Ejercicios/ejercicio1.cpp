#include <iostream>
#include <cmath>

class Circulo {
private:
    float radio;

public:
    Circulo(float r) {
        radio = r;
    }

    float calcularArea() {
        return M_PI * pow(radio, 2);
    }

    float calcularPerimetro() {
        return 2 * M_PI * radio;
    }
};

int main() {
    Circulo miCirculo(4.5);
    float area = miCirculo.calcularArea();
    float perimetro = miCirculo.calcularPerimetro();

    std::cout << "Área del círculo: " << area << std::endl;
    std::cout << "Perímetro del círculo: " << perimetro << std::endl;

    return 0;
}
