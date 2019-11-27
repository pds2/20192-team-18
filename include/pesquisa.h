#ifndef pesquisa_h
#define pesquisa_h
#include <iostream>
#include "usuario.h"
#include "departamento.h"
#include "terminal.h"
#include <string.h>

class Pesquisa{
    private:
        bool aluno;
        int departamento;
        int data;
    
    public:
        Pesquisa(Usuario _usuario, Departamento _departamento, Terminal _terminal);
        ~Persquisa();
        void pesquisar() = 0;
        void imprimirPesquisa(int data);
};
#endif