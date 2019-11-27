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
        int departamento_;
   
    public:

        GerenciadorDivulgador();
        ~GerenciadorDivulgador();
        
        
        //void pesquisar();
        //void imprimirPesquisa() override;
        
        void removerEvento();
        void adicinonarEvento();
        
        

};
#endif
