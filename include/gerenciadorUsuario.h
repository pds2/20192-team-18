#ifndef gerenciadorUsuario_h
#define gerenciadorUsuario_h
#include <iostream>
#include <string.h>
#include "evento.h"
#include "pesquisa.h"
#include "departamento.h"


class GerenciadorUsuario : public Pesquisa{
    private:
        std::string usuario;

    public:
        GerenciadorUsuario();
        ~GerenciadorUsuario();
        void imprimirTexto()override;
        void verEventos();
        
        
        
        
};
#endif
