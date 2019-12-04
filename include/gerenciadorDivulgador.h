#ifndef gerenciadorDivulgador_h
#define gerenciadorDivulgador_h
#include <iostream>
#include <string>
#include "evento.h"
#include "pesquisa.h"
#include "departamento.h"


class GerenciadorDivulgador :public Pesquisa{
    private: 
        std::string departamento;
   
    public:
        GerenciadorDivulgador(std::string dep);
        ~GerenciadorDivulgador();
        void imprimirTexto()override;
        void verEventos();
        void adicinonarEvento();
};
#endif