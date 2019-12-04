<h1>Gerenciador de eventos</h1>
Esse trabalho tem a finalidade de criar um sistema para que alunos e departamentos da UFMG possam divulgar ou consultar eventos que acontecem na universidade.

<h2>User stories</h2>

<h2>CRC</h2>



| Classe: Departamento                      |                       |
|-------------------------------------------|-----------------------|
| Responsabilidades:                        | Colaborações:         |
|   Imprimir departamentos                  |                       |



| Classe: GerenciadorUsario                                            |Super Classe: pesquisa   |
|----------------------------------------------------------------------|-------------------------|
| Responsabilidades:                                                   |Colaborações: Eventos    |
|   Poder consultar eventos                                            |                         |

| Classe: GerenciadorDivulgador                                        |Super Classe: Pesquisa |
|----------------------------------------------------------------------|-----------------------|
| Responsabilidades:                                                   |Colaborações: Evento   |
|   Poder consultar eventos                                            |                       |
|   Poder adicionar eventos                                            |                       |
|                                                                      |                       |

| Classe: Eventos                                                      |                            |
|----------------------------------------------------------------------|----------------------------|
| Responsabilidades:                                                   |Colaborações:               |
|   Saber nome do evento                                               |                            |
|   Saber o dia do evento                                              |                            |
|   Saber o mês do evento                                              |                            |
|   Saber o ano do evento                                              |                            |
|   Saber a descrição do evento                                        |                            |
|   Poder registrar o evento                                           |                            |



