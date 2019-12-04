#include "pessoa.h"
//reenviando pq eu nao sei usar o github e to passando vergonha aprendendo

#include <iostream>
#include "tecnico.h"


tecnico::tecnico(std::string TipoDeTecnico, std::string nome):
    pessoa(nome,0), _tecnico(TipoDeTecnico) {
    if (TipoDeTecnico== "Retranqueiro"){
        this->_defesa+=10;
        this->_ataque-=5;
    }
    if (TipoDeTecnico== "Equilibrado"){
        this->_defesa+=5;
        this->_ataque+=5;
    }
    if (TipoDeTecnico== "Ofensivo"){
        this->_defesa-=5;
        this->_ataque+=10;
    }
}

std::string tecnico::ValidaTecnico(){
    cout << "Os tipos de tecnicos sao:\n1-Retranqueiro\n2-Equilibrado\n3-Ofensivo\nDigite qual deles voce deseja." <<endl;
    int tecn;
    int valid=0;
    std::string TipoDeTecnico;
    while (valid != 1){
        cin >> tecn;
            if (tecn==Retranqueiro||tecn==Equilibrado||tecn==Ofensivo){ //valores do enum tipo de tecnico, caso sejam acrescentados mais tipos depois.
                valid = 1;
                if (tecn==1)
                    TipoDeTecnico = "Retranqueiro";
                else if (tecn==2)
                    TipoDeTecnico = "Equilibrado";
                else
                    TipoDeTecnico = "Ofensivo";
            }
            else{
                cout << "Entrada invalida, digite novamente."<<endl;
            }
        }
    return TipoDeTecnico;
}

tecnico::~tecnico(){
}

std::string tecnico::get_tipo(){
    return _tecnico;
}

std::string tecnico::get_Nome(){
    return _nome;
}

int tecnico::get_ataque(){
    return this->_ataque;
}

int tecnico::get_defesa(){
    return this->_defesa;
}
