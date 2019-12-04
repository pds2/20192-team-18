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








//Escolher imprimir eventos de departamentos especificos.
//virtual void GerenciadorUsuario :: pesquisar(){
    
//}
//Imprimir todas as funções do dia escolhido
//virtual void GerenciadorUsuario::imprimirPesquisa(){
    
//}