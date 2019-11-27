#ifndef gerenciadorUsuario_h
#define gerenciadorUsuario_h
#include <iostream>
#include <string.h>
#include "evento.h"
#include "pesquisa.h"
#include "departamento.h"


class GerenciadorUsuario : public pesquisa{

    private:
        int id;

    public:

        GerenciadorUsuario(int _data);
        ~GerenciadorUsuario()
        GerenciadorUsuario();

        virtual void pesquisar(int indexador);
        virtual void imprimirPesquisa();

};
#endif
