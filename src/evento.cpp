#include "evento.h"
#include <iostream>
#include <fstream>


Evento::Evento(int _dep, std::string _nome, int _ano, int _mes, int _dia, std::string _descricao, std::string _local, std::string _horario){
    this->dep = _dep;
    this->nome = _nome;
    this->ano = ano;
    this->mes = _mes;
    this->dia = _dia;
    this->local = _local;
    this->descricao = _descricao;
    this->horario = _horario;
}



Evento::~Evento(){
}

void Evento::armazenar_txt(){
    std::ofstream saida("eventos.txt", std::ofstream::app);
    saida << "****************"<<std::endl;
    saida << dep << std::endl;
    saida << nome << std::endl;
    saida << ano << std::endl;
    saida << mes << std::endl;
    saida << dia << std::endl;
    saida << local << std::endl;
    saida << descricao <<std::endl;
    saida << "****************"<<std::endl;


    

    
}




