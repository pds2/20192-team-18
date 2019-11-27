#ifndef usuario_h
#define usuario_h
#include <iostream>
#include "departamento.h"

class Usuario{
    private:
        bool aluno;
        int departamento;
    
    public:
        Usuario(int _tipo, int _dataPesquisa);
        ~Usuario();
        bool retornarAluno();
        int retornarDepartamento();
};
#endif