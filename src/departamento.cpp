#include <iostream>
#include "departamento.h"

Departamento::Departamento(){
}

Departamento::~Departamento(){
}

void Departamento::imprimirDepartamentos(){
    std::ifstream txtfile;
    std::string linha;

    txtfile.open("departamentos.txt");
    while (!txtfile.eof()){
        getline(txtfile, linha);
        std::cout<< linha << std::endl;
    }
    txtfile.close();
    std::cout<< std::endl;
}