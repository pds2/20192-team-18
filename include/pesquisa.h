#ifndef pesquisa_h
#define pesquisa_h
#include <iostream>
#include "departamento.h"
#include <string.h>

class Pesquisa{
    public:
       
        Pesquisa();
        ~Pesquisa();
        
        virtual void verEventos() = 0;
        virtual void imprimirTexto();
};
#endif