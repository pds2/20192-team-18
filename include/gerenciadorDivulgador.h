#ifndef gerenciadorDivulgador_h
#define gerenciadorDivulgador_h
#include <iostream>
#include <string.h>
#include "evento,h"
#include "pesquisa.h"
#include "departamento.h"


class GerenciadorDivulgador : public pesquisa{
    private:
        int id;
        int departamento_;
   
    public:

        GerenciadorUsuario(int _data);
        ~GerenciadorUsuario()
        GerenciadorUsuario();
        virtual void pesquisar(int indexador);
        virtual void imprimirPesquisa();
        void removerEvento();
        void adicinonarEvento();
        void alterarEvento();
        

};
#endif
