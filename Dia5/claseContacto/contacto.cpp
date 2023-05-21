#include "contacto.h"
#include <iostream>

Contacto::Contacto(std::string n, std::string t) {
    nombre = n;
    telefono = t;
}

std::string Contacto::getNombre() {
    return nombre;
}

std::string Contacto::getTelefono() {
    return telefono;
}

void Contacto::mostrarContacto() {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Teléfono: " << telefono << std::endl;
}
