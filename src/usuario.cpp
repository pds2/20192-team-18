#include <iostream>
#include "usuario.h"

Usuario::Usuario(bool _aluno, int _departamento){
    this->aluno = _aluno;
    this->departamento= _departamento;
}

Usuario::~Usuario(){
}

bool Usuario::retornarAluno(){
    return this->aluno;
}

int Usuario::retornarDepartamento{
    return this->departamento;
}
