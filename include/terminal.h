#ifndef terminal_h
#define terminal_h
#include <iostream>
#include <string.h>
#include "usuario.h"
#include "departamento.h"


class Terminal{
    Private:
        int tipo;
        int dataPesquisa;
    
    Public:
        Terminal(int _tipo, int _dataPesquisa);
        ~Terminal();

        int adequarData();
};

#endif
            