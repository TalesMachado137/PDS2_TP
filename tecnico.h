#ifndef TECNICO_H
#define TECNICO_H
 //agora vai dar certo enviar isso
#include "pessoa.h"
//enviei mas nao foi
#include <iostream>

 enum TiposDeTecnicos {Retranqueiro=1, Equilibrado, Ofensivo};

 class tecnico : public pessoa
 {
     public:
         tecnico(std::string TipoDeTecnico, std::string Nome);
         virtual ~tecnico();
         std::string get_tipo();
         std::string get_Nome();
         int get_ataque();
         int get_defesa();
         std::string ValidaTecnico();
     private:
         std::string _tecnico;
         std::string _nome;
         int _defesa=0;
         int _ataque=0;
 };
#endif

