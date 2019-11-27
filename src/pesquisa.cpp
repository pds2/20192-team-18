#include <iostream>
#include "pesquisa.h"

Pesquisa::Pesquisa(Usuario _usuario, Departamento _departamento){
    this->aluno = 0;
    this->departamento =0
}

Pesquisa::~Pesquisa();
virtual void Pesquisa::pesquisar() = 0;
virtual void Pesquisa::imprimirPesquisa(){
    std::cout << algo << " ";
}