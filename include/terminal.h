#ifndef terminal_h
#define terminal_h
#include <iostream>
#include <string.h>
#include "usuario.h"
#include "departamento.h"


class Terminal{
    private:
        int tipo;
        int dataPesquisa;
    
    public:
        Terminal(int _tipo, int _dataPesquisa);
        ~Terminal();

        int adequarData();
};

#endif
            