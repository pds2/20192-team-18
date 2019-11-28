#ifndef gerenciadorDivulgador_h
#define gerenciadorDivulgador_h
#include <iostream>
#include <string.h>
#include "evento.h"
#include "pesquisa.h"
#include "departamento.h"


class GerenciadorDivulgador /*: public Pesquisa*/{
    private:
        int id;
        int departamento;
   
    public:

        GerenciadorDivulgador(int dep);
        ~GerenciadorDivulgador();
        
        
        //void pesquisar();
        //void imprimirPesquisa() override;
        
        void adicinonarEvento();
        void removerEvento();
        
        
        

};
#endif