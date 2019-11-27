#ifndef evento_h
#define evento_h
#include <string.h>
#include <iostream>

class Evento{
    private:
        int id;
        std::string nome;
        int inicio;
        int termino;
        int publico; // pode ser mais de um
        std::string local;
        std::string descricao;

    public:
        Evento(int _id, std::string _nome, int _inicio, int _termino, int _publico, std::string _local, std::string _descricao);
        ~Evento();
        
        int _id();
        std::string _nome();
        int _inicio();
        int _termino();
        int _publico();
        std::string _local();
        std::string _descricao();


        
};
#endif