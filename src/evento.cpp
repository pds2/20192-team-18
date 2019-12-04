#include "evento.h"
#include <iostream>
#include <fstream>


Evento::Evento(std::string _dep, std::string _nome, int _ano, int _mes, int _dia, std::string _descricao){
    this->dep = _dep;
    this->nome = _nome;
    this->ano = _ano;
    this->mes = _mes;
    this->dia = _dia;
    this->descricao = _descricao;
}

Evento::~Evento(){
}

void Evento::armazenar_txt(){
    std::ofstream saida("eventos.txt", std::ofstream::app);
    saida<<"-------------------------------------"<<std::endl;
    saida<<dep<< std::endl;
    saida<<"Nome: "<<nome<< std::endl;
    saida<<"Data: " <<dia<<"/"<<mes<<"/"<<ano<<std::endl;
    saida <<"Descrição: "<< descricao <<std::endl;
    saida.close();
}




