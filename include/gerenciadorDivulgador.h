#include <iostream>
#include "terminal.h"
#include "pesquisar.h"
#include "usuario.h"


class GerenciadorDivulgador : public pesquisa{
    private:
        int indexador;
   
    public:

        GerenciadorUsuario(int _data);
        ~GerenciadorUsuario()
        GerenciadorUsuario();
        virtual void pesquisar(int indexador);
        virtual void imprimirPesquisa();
        void removerEvento();
        void adicinonarEvento();
        void alterarEvento();

}
