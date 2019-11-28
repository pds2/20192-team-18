#include "gerenciadorDivulgador.h"
#include <iostream>

GerenciadorDivulgador::GerenciadorDivulgador(int dep) /*: Pesquisar(_usuario, _departamento)*/{
    //this->data = _data;
   // this->id = _id;
   this->departamento = dep;
}

GerenciadorDivulgador::~GerenciadorDivulgador() {
}



//Achar evento especifico para o proprietario alterar ou remover
//void GerenciadorDivulgador :: pesquisar(){
    
    
//}

//Imprimir todas as funções do dia escolhido
//void GerenciadorDivulgador ::imprimirPesquisa(){
    
//}

void GerenciadorDivulgador::adicinonarEvento(){
    std::string nome;
    std::string descricao;
    std::string local;
    std::string horario;
    int dia, mes, ano;
     
    
    //organizar melhor e descobrir como pegar texto com espaço
    std::cout<<"Digite o nome do evento:"<<std::endl; 
    std::cin>>nome;
    std::cout<<"Digite o ano do envento:"<<std::endl; 
    std::cin>>ano;
    std::cout<<"Digite o mês do envento:"<<std::endl; 
    std::cin>>mes;
    std::cout<<"Digite o dia do envento:"<<std::endl; 
    std::cin>>dia;
    std::cout<<"Digite o local do evento"<<std::endl;
    std::cin>>local;
    std::cout<<"Digite o horário do evento"<<std::endl;
    std::cin>>horario;

    Evento *e = new Evento( departamento, nome,  ano,  mes,  dia,  descricao, local , horario);
    e->armazenar_txt();
    delete e;
    


    
    







    
}

void GerenciadorDivulgador:: removerEvento(){

}
