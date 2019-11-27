#include "departamento.h"
#include "usuario.h"
#include "evento.h"
#include "gerenciadorDivulgador.h"
#include "gerenciadorUsuario.h"
#include "terminal.h"
#include "pesquisa.h"

#include <iostream>
#include <string.h>

#include <ctype.h>

#define USUARIO 0
#define DIVULAGADOR 1

int main(){

    int on_off = 1;
    int indentificador = -1;

    while(on_off == 1){
        std::cout << std::endl <<"BEM-VINDO! O QUE VOCÊ DESEJA FAZER?" << std::endl << std::endl;
        std::cout << "Digite 1 se você gostaria de encontrar algum evento"<< std::endl ;
        std::cout << "Digite 2 se você gostaria de divulgar algum evento" << std::endl;
        std::cout << "Digite 3 se você gostaria de sair do programa"<< std::endl <<std::endl ;

        try{
            std::cin >> indentificador;
            if((!std::cin || indentificador < 0 || indentificador > 3)){
                throw(std::invalid_argument("Valor inválido"));
            }
            } catch(std::invalid_argument &e){
            std::cout << "Valor inválido. Use números de 1 a 3" << std::endl;
        }

        if(indentificador == 3){
            std::cout << "Programa encerrrado"<< std::endl;
            return 0;
        }

        if(indentificador == 2){
            std::cout << "Programa encerrrado"<< std::endl;
            return 0;
        }



    }
}