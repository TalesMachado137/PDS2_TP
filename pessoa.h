#include <iostream>
using namespace std;
#ifndef PESSOA_H
#define PESSOA_H
class pessoa
{
    private:
        std::string _nome;
        bool _estrela;
    public:
        pessoa(std::string nomezao, bool estrela);
        std::string get_nome();
        bool get_estrela();
        virtual float get_ForcaAtaque() = 0;
        virtual float get_ForcaDefesa() = 0;
};

#endif //PESSOA.H
