
#include <iostream>
using namespace std;

class Persona
{
private:
    string nombre;
    int edad;

public:
    Persona(string, int);
    virtual void mostrar(); // virtual solo va en los metodos de la clase padre, es para el polimorfismo
};

class Alumno : public Persona
{
private:
    int nota_final;

public:
    Alumno(string, int, int);
    void mostrar();
};

Persona::Persona(string _nombre, int _edad)
{
    edad = _edad;
    nombre = _nombre;
}

void Persona::mostrar()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

Alumno::Alumno(string _nombre, int _edad, int _nota_final) : Persona(_nombre, _edad)
{
    nota_final = _nota_final;
}

void Alumno::mostrar()
{
    Persona::mostrar(); // de esta manera lo puedo usar
    cout << "Nota final: " << nota_final << endl;
}

int main()
{
    Persona *vector[2];

    vector[0] = new Alumno("Pedro", 34, 8);

    vector[0]->mostrar();

    vector[1] = new Persona("Pepe", 21);

    vector[1]->mostrar();

    return 0;
}
