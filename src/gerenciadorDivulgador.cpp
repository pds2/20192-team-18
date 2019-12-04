#include "gerenciadorDivulgador.h"
#include <iostream>
#include <string>

GerenciadorDivulgador::GerenciadorDivulgador(std::string dep){
   this->departamento = dep;
}

GerenciadorDivulgador::~GerenciadorDivulgador() {
}

void GerenciadorDivulgador::verEventos(){
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

void GerenciadorDivulgador::imprimirTexto(){
    std::cout<<"||EXIBINDO A SOLICITÇÃO DE CONSULTA DO " <<this->departamento<<"||" << std::endl;
}

void GerenciadorDivulgador::adicinonarEvento(){
    std::string nome;
    std::string descricao;
    std::string local;
    std::string horario;
    int dia, mes, ano;

    std::cout << departamento << std::endl ; 
    std::cout<<"Digite o nome do evento:"<<std::endl; 
    std::cin.ignore();
    getline(std::cin, nome);
        
    std::cout<<"Digite o ano do envento:"<<std::endl; 
    std::cin.clear();
    std::cin>>ano;
        
    std::cout<<"Digite o mês do envento:"<<std::endl; 
    std::cin.clear();
    std::cin>>mes;
        
    std::cout<<"Digite o dia do envento:"<<std::endl; 
    std::cin.ignore();
    std::cin>>dia;
    
    std::cout<<"Digite uma descrição para o evento:"<<std::endl; 
    std::cin.ignore();
    getline(std::cin, descricao);
    
    Evento *e = new Evento( departamento, nome,  ano,  mes,  dia,  descricao);
    e->armazenar_txt();
    delete e;
}


