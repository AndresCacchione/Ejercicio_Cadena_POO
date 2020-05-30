#include <iostream>
#include <cstdlib>
#include <cstring>
#include "cadena.h"

using namespace std;

int main()
{
    Cadena cadena("HOLA");
    cout<< cadena.getCadena()<<endl;
    cadena.setCadena("MUNDO");
    cout<<"El largo de la cadena es: "<<cadena.getLargo()<<endl;
    cout<< cadena.getCadena()<<endl;

    return 0;
}
