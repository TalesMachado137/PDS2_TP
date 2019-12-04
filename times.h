#ifndef TIME_H
#define TIME_H

#include "pessoa.h"
#include "jogador.h"
#include <iostream>
#include<vector>
#include"tecnico.h"

class times {


private:
	std::string _escudo;
	std::vector<Jogador*> _Elenco;
	tecnico* _Tecnico;
	bool _time_usuario;
	int Gols;


public:
	times (std::vector<Jogador*> Jogadores, tecnico* Profexor, std::string nome, bool usuario);
	~times();
	std::string get_escudo();
	void get_elenco();
	float atacando();
	float defendendo ();
	bool get_user();
	void set_user(bool w);
	void Fez_gol(int n);
	void Zerar_gol();
	void Change_manager();
	int get_Gols();



};

#endif // TIME_H



