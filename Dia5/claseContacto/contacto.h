#ifndef CONTACTO_H
#define CONTACTO_H

#include <string>

class Contacto {
private:
    std::string nombre;
    std::string telefono;

public:
    Contacto();
    Contacto(std::string n, std::string t);
    std::string getNombre();
    std::string getTelefono();
    void mostrarContacto();
};

#endif
