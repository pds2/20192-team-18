#include "departamento.h"
#include "usuario.h"
#include "evento.h"
#include "gerenciadorDivulgador.h"
#include "gerenciadorUsuario.h"
#include "terminal.h"
#include "pesquisa.h"

#include <iostream>
#include <string.h>
#include <fstream>


#include <ctype.h>

#define USUARIO 0
#define DIVULAGADOR 1

int main(){

    int on_off = 1;
    int indentificador = -1;
    int dep = 0;
    int linhas = 0;

    while(on_off == 1){
        std::cout << std::endl <<"BEM-VINDO! O QUE VOCÊ DESEJA FAZER?" << std::endl << std::endl;
        std::cout << "Digite 1 se você gostaria de encontrar algum evento"<< std::endl ;
        std::cout << "Digite 2 se você gostaria de divulgar algum evento" << std::endl;
        std::cout << "Digite 3 se você gostaria de sair do programa"<< std::endl <<std::endl ;

        //Aqui garantimos que os números vão estar dentro do especificado
        std::cin >> indentificador;
        while((!std::cin || indentificador < 1 || indentificador > 3)){
            std::cout << "Valor inválido. Escolha um número entre 0 e 3" << std::endl;
            std::cin >> indentificador;
        }
            
        
        if(indentificador == 3){
            std::cout << "Programa encerrrado"<< std::endl;
            return 0;
        }

        if(indentificador == 2){
            std::cout <<"QUAL É O DEPARTAMENTO RESPONSÁVEL PELO EVENTO?"<< std::endl;
            std::cout << "OBS:Essa é uma versão de teste do programa para apresentação."<< std::endl;;
            std::cout << "Logo, inicialmente só serão aceitos os departamentos PROGRAD, DCC ,MAT e FIS!"<< std::endl;
            std::cout << "Digite 0 se o evento é responsabildade da PROGRAD"<< std::endl;
            std::cout << "Digite 1 se o evento é responsabildade do departamento DCC"<< std::endl ;
            std::cout << "Digite 2 se o evento é responsabildade do departamento MAT"<< std::endl ;
            std::cout << "Digite 3 se o evento é responsabildade do departamento FIS"<< std::endl ;

            //Aqui garantimos que os números vão estar dentro do especificado
            std::cin >> dep;
            while((!std::cin || dep < 0 || dep > 3)){
            std::cout << "Valor inválido. Escolha um número entre 0 e 3" << std::endl;
            std::cin >> dep;            
            }




            std::cout << "Teste" << std::endl;

            GerenciadorDivulgador *a = new GerenciadorDivulgador(dep);
            a->adicinonarEvento();
            //delete a;

            std::cout << "Teste2" << std::endl;








            
        }
















        std::cout <<"DESEJA CONTINUAR NO PROGRAMA? DIGITE \"1 PARA SIM\" E \"0 PARA NÃO\""<< std::endl;
        std::cin >> on_off;
        while((!std::cin || on_off < 0 ||on_off > 1)){
            std::cout << "VALOR INVALIDO!!DIGITE \"1 PARA SIM\" E \"0 PARA NÃO\"" << std::endl;
            std::cin >> on_off;
        }

        










        
    }
    
        






    
}