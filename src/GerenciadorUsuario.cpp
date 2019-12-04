#include "gerenciadorUsuario.h"
#include <iostream>

GerenciadorUsuario:: GerenciadorUsuario(){
}

GerenciadorUsuario::~GerenciadorUsuario() {
}

void GerenciadorUsuario::imprimirTexto(){
    std::cout<<"||EXIBINDO A SOLICITÇÃO DE CONSULTA DO USUARIO||" << std::endl;
}

void GerenciadorUsuario::verEventos(){
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