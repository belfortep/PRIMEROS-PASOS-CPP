#include <iostream>

using namespace std;

void cambiar_valor_puntero(int* primer_valor, int segundo_valor)
{
    *primer_valor = segundo_valor;
}

int main(){

    int primer_valor = 20;

    int segundo_valor = 40;

    int &ref_primer_valor = primer_valor;

    cout << "primer valor" << primer_valor << endl;

    cout << "&primer valor" << &primer_valor << endl;


    primer_valor = 100;

    cout << "ref_primer_valor" << ref_primer_valor << endl;

    cambiar_valor_puntero(&ref_primer_valor, segundo_valor);

    cout << "ref_primer_valor" << ref_primer_valor << endl;

    cout << "&ref_primer_valor" << &ref_primer_valor << endl;

    cout << "primer valor" << primer_valor << endl;

    return 0;
}