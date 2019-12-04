#include "departamento.h"
#include "evento.h"
#include "gerenciadorDivulgador.h"
#include "gerenciadorUsuario.h"
#include <iostream>
#include <string.h>
#include <fstream>

#define USUARIO 0
#define DIVULAGADOR 1

int main(){

    int on_off = 1;
    int menuPrincipal = 0;
    int menuDivulgador = 0;
    int menuDivulgador2 = 0;
    std::string dep;
    Departamento *departamento = new Departamento();

    while(on_off == 1){
        std::cout << "------------------------" << std::endl;
        std::cout << std::endl <<"BEM-VINDO! O QUE VOCÊ DESEJA FAZER?" << std::endl << std::endl;
        std::cout << "DIGITE (1) SE VOCÊ É UM USUÁRIO COMUM E GOSTARIA DE VER OS EVENTO"<< std::endl ;
        std::cout << "DIGITE (2) PARA ALGUM DEPARTAMENTO DIVULGAR OU VER OS EVENTOS" << std::endl;
        std::cout << "DIGITE (3) PARA SAIR DO PROGRAMA"<< std::endl;
        std::cout << "------------------------" << std::endl;
        std::cin>>menuPrincipal;

        //O programa encerra
        if(menuPrincipal== 3){
            std::cout << "Programa encerrrado" << std::endl;
            return 0;
        }

        //Opçoes do menu do divulgador(departamentos)
        if(menuPrincipal == 2){

            while(menuDivulgador != 1 ){
                std::cout << "------------------------" << std::endl;
                std::cout <<"|DIGITE (1) PARA INFORMAR O NOME DO DEPARTAMENTO QUE DESEJA ADICIONAR OU VER OS EVENTOS [OBS: DEVE SER DIGITADO A SIGLA DO DEPARTAMENTO EM LETRA MAIUSCULA, POR EXEMPLO: \"DCC\".] DIGITE (2) CASO DESEJE VER A LISTA DE TODOS OS DEPARTAMENTOS QUE ESSE PROGRAMA RECONHECE|"<<std::endl;
                std::cout << "------------------------" << std::endl;
                std::cin>>menuDivulgador;
            
                if(menuDivulgador == 1){
                    std::cout << "------------------------" << std::endl;
                    std::cout <<"INFORME O NOME DO DEPARTAMENTO:" <<std::endl;
                    std::cout << "------------------------" << std::endl;
                    std::cin>>dep;
                    GerenciadorDivulgador *a = new GerenciadorDivulgador(dep);

                    std::cout << "------------------------" << std::endl;
                    std::cout<<"DIGITE (1) PARA DIVULGAR UM EVENTO OU (2) PARA VER OS EVENTOS"<<std::endl;
                    std::cout << "------------------------" << std::endl;
                    std::cin>>menuDivulgador2;

                    if(menuDivulgador2 == 1){
                        a->adicinonarEvento();
                    }
                    if(menuDivulgador2 == 2){
                        a->imprimirTexto();
                        a->verEventos();
                    }
                }
                if(menuDivulgador == 2){
                    departamento->imprimirDepartamentos();
                    std::cout <<"*********DEPARTAMENTOS LISTADOS ACIMA!********" <<std::endl <<std::endl;
                }
            }
        }

        // menu usuário
        if(menuPrincipal == 1){
            GerenciadorUsuario *a = new GerenciadorUsuario();
            a->imprimirTexto();
            a->verEventos();
        }

        //encerrar progama
        std::cout << "------------------------" << std::endl;
        std::cout <<"DESEJA CONTINUAR NO PROGRAMA? DIGITE \"1 PARA SIM\" E \"0 PARA NÃO\""<< std::endl;
        std::cout << "------------------------" << std::endl;
        std::cin >> on_off;
    }
}