#ifndef evento_h
#define evento_h
#include <string.h>
#include <iostream>

class Evento{
    private:
        int dep;
        std::string nome;
        int ano;
        int mes;
        int dia; // pode ser mais de um
        std::string descricao;
        std::string local;
        std::string horario;

    public:
        Evento(int _dep, std::string _nome, int _ano, int _mes, int _dia, std::string _descricao, std::string _local, std::string _horario);
        ~Evento();
        
        void armazenar_txt();


        
};
#endif