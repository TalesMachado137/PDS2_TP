#include "jogador.h"

Jogador::Jogador(std::string nome, bool estrela, std::string posicao, int ForcaAtaque, int ForcaDefesa):
pessoa(nome, estrela), ForcaAtaque(ForcaAtaque), ForcaDefesa(ForcaDefesa), posicao(posicao){}


Jogador::~Jogador()
{
}

std::string Jogador::get_posicao()
{
	return this->posicao;
}

float Jogador::get_ForcaAtaque()
{
	return this->ForcaAtaque;
}

float Jogador::get_ForcaDefesa()
{
	return this->ForcaDefesa;
}

