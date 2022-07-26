
#include <iostream>
#include <stdlib.h>
using namespace std;

class Persona
{
private:      // atributos encapsulados
    int edad; // podria ponerle protected asi pueden usar usado por las clases que heredan
    string nombre;

public:
    Persona(int, string); // constructor en c++
    ~Persona();           // destructor
    void comer();
    void caminar();
    void dame_info();
};

class Trabajador : public Persona
{
private:
    int salario;
    string trabajo;

public:
    Trabajador(int, string, int, string);
    void setSalario(int _salario);
    void setTrabajo(string _trabajo);
    int getSalario();
    string getTrabajo();
    void dame_info_trabajador();
};

Trabajador::Trabajador(int _edad, string _nombre, int _salario, string _trabajo) : Persona(_edad, _nombre)
{
    salario = _salario;
    trabajo = _trabajo;
}

void Trabajador::dame_info_trabajador()
{
    cout << "Salario: " << salario << " Trabajo " << trabajo << endl;
}

void Trabajador::setSalario(int _salario)
{
    salario = _salario;
}

void Trabajador::setTrabajo(string _trabajo)
{
    trabajo = _trabajo;
}

int Trabajador::getSalario()
{
    return salario;
}

string Trabajador::getTrabajo()
{
    return trabajo;
}

// constructor
Persona::Persona(int _edad, string _nombre)
{
    edad = _edad;
    nombre = _nombre;
}
// Clase::nombre_metodo
void Persona::comer()
{
    cout << "Me llamo " << nombre << " y estoy comiendo" << endl;
}
void Persona::caminar()
{
    cout << "Me llamo " << nombre << " y estoy caminando" << endl;
}

void Persona::dame_info()
{
    cout << "Me llamo " << nombre << " y tengo" << edad << " años" << endl;
}

Persona::~Persona()
{
    cout << nombre << " Destruido F" << endl;
}

int main()
{
    // 2 maneras de crear objetos
    Persona persona = Persona(25, "John");

    Persona persona2(41, "Jane");

    Trabajador mi_trabajador(37, "Juan", 500, "Carpintero");

    mi_trabajador.dame_info();

    mi_trabajador.dame_info_trabajador();

    persona.dame_info();

    persona2.dame_info();

    persona.comer();

    persona.caminar();

    persona.~Persona();

    return 0;
}