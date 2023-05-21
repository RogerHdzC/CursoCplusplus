#include <iostream>
#include <string>

// Definición de la clase Persona
class Persona {
private:
    std::string nombre;
    int edad;

public:
    // Constructor
    Persona(std::string n, int e) {
        nombre = n;
        edad = e;
        std::cout << "Se ha creado un objeto Persona." << std::endl;
    }

    // Destructor
    ~Persona() {
        std::cout << "Se ha destruido un objeto Persona." << std::endl;
    }

    // Métodos de acceso
    std::string getNombre() {
        return nombre;
    }

    int getEdad() {
        return edad;
    }

    // Método para mostrar los datos de la persona
    void mostrarDatos() {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
    }
};

int main() {
    // Creación de objetos de la clase Persona
    Persona persona1("John Doe", 25);
    Persona persona2("Jane Smith", 30);

    // Acceso a los miembros de los objetos
    std::cout << "Nombre de persona1: " << persona1.getNombre() << std::endl;
    std::cout << "Edad de persona2: " << persona2.getEdad() << std::endl;

    // Uso de métodos
    persona1.mostrarDatos();
    persona2.mostrarDatos();

    return 0;
}
