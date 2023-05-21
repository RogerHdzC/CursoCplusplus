#include <iostream>

class Rectangulo {
private:
    float ancho;
    float altura;

public:
    Rectangulo(float w, float h) {
        ancho = w;
        altura = h;
    }

    float calcularArea() {
        return ancho * altura;
    }

    float calcularPerimetro() {
        return 2 * (ancho + altura);
    }
};

int main() {
    // Ejemplo de uso de clases y objetos
    Rectangulo miRectangulo(5.0, 3.0);
    float area = miRectangulo.calcularArea();
    float perimetro = miRectangulo.calcularPerimetro();

    std::cout << "Área del rectángulo: " << area << std::endl;
    std::cout << "Perímetro del rectángulo: " << perimetro << std::endl;

    return 0;
}
