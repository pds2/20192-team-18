#include "evento.h"
#include <iostream>

Evento::Evento(std::string _id, std::string _nome, int _inicio, int _termino, int _publico, std::string _local, std::string _descricao){
    this->id = _id;
    this->nome = _nome;
    this->inicio = _inicio;
    this->termino = _termino;
    this->publico = _publico;
    this->local = _local;
    this->descricao = _descricao

}

Evento::~Evento();
