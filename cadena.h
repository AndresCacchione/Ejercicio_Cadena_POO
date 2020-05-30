#ifndef CADENA_H
#define CADENA_H


class Cadena
{
    private:
        char *cad;
        int tamanio;
    public:
        Cadena(int);
        Cadena(char *);
        char* getCadena();
        int getLargo();
        void setCadena(char*);
        ~Cadena();
};

#endif // CADENA_H
