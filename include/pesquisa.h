#ifndef pesquisa_h
#define pesquisa_h
#include <iostream>
#include "usuario.h"
#include "departamento.h"
#include "terminal.h"
#include <string.h>

class Pesquisa{
    public:
        bool aluno;
        int departamento;
        int data;
    
    
        Pesquisa(Usuario _usuario, Departamento _departamento, Terminal _terminal);
        
        virtual void pesquisar() = 0;
        virtual void imprimirPesquisa();
};
#endif