#include <iostream>
#include "pessoa.h"
using namespace std;

pessoa::pessoa(std::string nomezao, bool estrela)
{
    _nome    = nomezao;
    _estrela = estrela;
}

std::string pessoa::get_nome()
{
    return _nome;
}

bool pessoa::get_estrela()
{
    return _estrela;
}
