#pragma once

#include <string>

class Persona {
public:
    Persona();
    Persona(std::string, int);
    ~Persona();

    std::string getNombre();
    void setNombre(std::string);

    int getEdad();
    void setEdad(int);

    virtual void muestraDatos();

protected:
    std::string nombre;
    int edad;  
};