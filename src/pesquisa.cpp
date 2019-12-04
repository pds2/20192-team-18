#include <iostream>
#include "pesquisa.h"

Pesquisa::Pesquisa(){
}

Pesquisa::~Pesquisa(){
}

void Pesquisa::verEventos() {
    std::ifstream eventos;
    std::string linha;
    eventos.open("eventos.txt");
    while (!eventos.eof()){
        getline(eventos, linha);
        std::cout<< linha << std::endl;
    }
    eventos.close();
    std::cout<< std::endl;
}
void Pesquisa::imprimirTexto(){}
  

    
