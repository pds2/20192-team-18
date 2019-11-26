<h1>Gerenciador de eventos</h1>
Esse trabalho tem a finalidade de criar um sistema para que alunos e departamentos da UFMG possam criar ou consultar eventos que acontecem na universidade.

<h2>User stories</h2>

<h2>CRC</h2>

| Classe: Usuário                           |                       |
|-------------------------------------------|-----------------------|
| Responsabilidades:                        | Colaborações:         |
|   Saber se é aluno;                       |                       |
|   Saber seu departamento;                 |                       | 

| Classe: Divulgador                        |                       |
|-------------------------------------------|-----------------------|
| Responsabilidades:                        | Colaborações:         |
|   Saber seu departamento                  |                       |


| Classe: Terminal                                                     |                       |
|----------------------------------------------------------------------|-----------------------|
| Responsabilidades:                                                   | Colaborações:         |
|   Saber se quem está acessando é usuário ou divulgador;              |                       |
|   Saber a data de pesquisa;                                          |                       |
|   Ser capaz de adequar o formato da data para pesquisa               |                       |


| Classe: Pesquisa                                                     |                       |
|----------------------------------------------------------------------|-----------------------|
| Responsabilidades:                                                   |Colaborações:          |
|   Saber dos eventos registrados                                      |Terminal               |
|   Poder pesquisiar evento                                            |Usuário                |
|   Poder imprimir eventos                                             |                       |
  

| Classe: GerenciadorUsario                                     |Super Classe: pesquisa |
|----------------------------------------------------------------------|-----------------------|
| Responsabilidades:                                                   |Colaborações: Terminal |
|   Poder consultar eventos                                            |                       |

| Classe: GerenciadorDivulgador                                        |Super Classe: Pesquisa |
|----------------------------------------------------------------------|-----------------------|
| Responsabilidades:                                                   |Colaborações: Terminal |
|   Poder consultar eventos                                            |                       |
|   Poder adicionar eventos                                            |                       |
|   Poder alterar evento                                               |                       |
|   Poder  Salvar evento                                               |                       |

| Classe: Eventos                                                      |                            |
|----------------------------------------------------------------------|----------------------------|
| Responsabilidades:                                                   |Colaborações:               |
|   Saber nome do evento                                               |GerenciadorEventosUsuario   |
|   Saber o inicio do evento                                           |GerenciadorEventosDivulgador|
|   Saber o término do evento                                          |                            |
|   Saber o público do evento                                          |                            |
|   Saber o local do evento                                            |                            |
|   Saber a descrição do evento                                        |                            |
|   Poder registrar o evento                                           |                            |

| Classe: EventosPagos                                                 |Super Classe: Eventos       |
|----------------------------------------------------------------------|----------------------------|
| Responsabilidades:                                                   |Colaborações:               |
|   Saber o valor do evento                                            |GerenciadorEventosUsuario   |
|   Ser capaz de adicionar um valor na descrição do evento             |GerenciadorEventosDivulgador|


