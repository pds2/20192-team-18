#ifndef pesquisa_h
#define pesquisa_h
#include <iostream>
#include "usuario.h"
#include "departamento.h"
#include "terminal.h"
#include <string.h>

class Pesquisa{
    public:
        bool aluno = 0;
        int departamento = 0;
        
    
    
        Pesquisa(Usuario _usuario, Departamento _departamento, Terminal _terminal);
        
        virtual void pesquisarNome() = 0;
        virtual void pesquisarData() = 0;
};
#endif