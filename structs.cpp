#include <iostream>
using namespace std;

typedef struct Oficio
{

    string nombre;
    int salario;

} Oficio_t;

typedef struct Usuario
{

    string nombre;
    string apellido;
    int edad;
    Oficio_t oficio;

} Usuario_t;

int main()
{
    Usuario_t usuario;

    Oficio_t oficio;

    oficio.nombre = "Programador";

    oficio.salario = 1000;

    usuario.nombre = "John";

    usuario.apellido = "Doe";

    usuario.edad = 25;

    usuario.oficio = oficio;

    cout << "Nombre: " << usuario.nombre << endl;

    cout << "Trabaja de: " << usuario.oficio.nombre << endl;

    cout << "Salario de: $" << usuario.oficio.salario << endl;

    return 0;
}