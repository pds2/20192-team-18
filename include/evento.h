#ifndef evento_h
#define evento_h
#include <string.h>
#include <iostream>


class Evento{
    private:
        std::string dep;
        std::string nome;
        int ano;
        int mes;
        int dia; 
        std::string descricao;
       
    public:
        Evento(std::string _dep, std::string _nome, int _ano, int _mes, int _dia, std::string _descricao);
        ~Evento();
        void armazenar_txt();
};
#endif