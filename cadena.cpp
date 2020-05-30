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
    cad = new char[tam+1];
    if(cad==NULL)
        {
        cout<<"Error: memoria no asignada."<<endl;
        tamanio=0;
        return;
        }
    strcpy(cad,nueva_cad);
    tamanio=tam+1;
}

char* Cadena::getCadena()
{
    if(cad==NULL)
    {
        cerr<<"Error: Cadena sin memoria."<<endl;
    }
    return cad;
}

void Cadena::setCadena(char *nueva_cadena)
{
    if(nueva_cadena==NULL)
    {
        cerr<<"Error: cadena NULL."<<endl;
        return;
    }
        int tam=strlen(nueva_cadena);

        for(int i=0;i<min(tamanio-1,tam);i++)
        {
            cad[i]=nueva_cadena[i];
        }
        cad[tamanio-1]='\0';
}

int Cadena::getLargo()
{
    return tamanio;
}

Cadena::~Cadena()
{
    if(tamanio) delete cad;
}
