#include <iostream>
#include <cstdlib>
#include <cstring>
#include "cadena.h"

using namespace std;

Cadena::Cadena(int tam=0)
{
    cad = new char[tam+1];
    if(cad==NULL)
    {
        cout<<"Error: memoria no asignada."<<endl;
        tamanio=0;
        return;
    }
    cad[0]='\0';
    tamanio=tam+1;
}

Cadena::Cadena(char *nueva_cad)
{
    int tam=strlen(nueva_cad);
    cad = new char[tam];
    if(cad==NULL)
        {
        cout<<"Error: memoria no asignada."<<endl;
        tamanio=0;
        return;
        }
    strcpy(cad,nueva_cad);
    tamanio=tam;
}

char* Cadena::getCadena()
{
    return cad;
}

void Cadena::setCadena(char *nueva_cadena)
{
    int tam=strlen(nueva_cadena);
    if(tam<=tamanio)
    {
    strcpy(cad,nueva_cadena);
    }

    else
    {
        for(int i=0;i<tamanio;i++)
        {
            cad[i]=nueva_cadena[i];
        }
        cad[tamanio]='\0';
    }
}

int Cadena::getLargo()
{
    return tamanio;
}

Cadena::~Cadena()
{
    if(tamanio) delete cad;
}
