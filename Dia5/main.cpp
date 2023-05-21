#include <iostream>
#include <string>
#include "claseContacto/contacto.cpp"

int main() {
    const int MAX_CONTACTOS = 5;
    Contacto listaContactos[MAX_CONTACTOS];

    for (int i = 0; i < MAX_CONTACTOS; i++) {
        std::string nombre, telefono;
        std::cout << "Ingrese el nombre del contacto: ";
        std::cin >> nombre;
        std::cout << "Ingrese el teléfono del contacto: ";
        std::cin >> telefono;

        Contacto nuevoContacto(nombre, telefono);
        listaContactos[i] = nuevoContacto;
    }

    std::cout << "Lista de contactos:" << std::endl;
    for (int i = 0; i < MAX_CONTACTOS; i++) {
        std::cout << "Contacto " << i+1 << ":" << std::endl;
        listaContactos[i].mostrarContacto();
        std::cout << std::endl;
    }

    return 0;
}
