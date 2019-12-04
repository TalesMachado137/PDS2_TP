#ifndef JOGADOR_H
#define JOGADOR_H

#include "pessoa.h"

class Jogador: public pessoa
{
    private:
	std::string posicao;
	int ForcaAtaque;
	int ForcaDefesa;
    public:
        Jogador(std::string nome, bool estrela, std::string posicao, int ForcaAtaque, int ForcaDefesa);
        virtual ~Jogador();
        std::string get_posicao();
	    float get_ForcaAtaque();
	    float get_ForcaDefesa();

};

#endif //JOGADOR.H

