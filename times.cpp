#include "times.h"



times::	times (std::vector<Jogador*> Jogadores, tecnico* Profexor, std::string nome, bool usuario){

	this-> _escudo=nome;
    this->_Elenco= Jogadores;
    this->_time_usuario=usuario;
    this->Gols=0;
	this-> _Tecnico=Profexor;

}



times::~times () {}


std::string times:: get_escudo(){
		return(this->_escudo);
}



void times:: get_elenco() { //Imprime o time e seus jogadores, alem do estilo adotado pelo tecnico

int i;

std::cout<<"Nome:"<<get_escudo()<<std::endl;
std::cout<<"Elenco:"<<std::endl;
std::cout<<std::endl;

for(i=0;i<int (_Elenco.size());i++){


	std::cout<<_Elenco[i]->get_nome()<<" "<<std::endl;
	std::cout<<"Posicao:"<<" "<<_Elenco[i]->get_posicao()<<std::endl;
	if(_Elenco[i]->get_estrela()==true)
        std::cout<<"*Jogador Decisivo*"<<std::endl;
	std::cout<<std::endl;
	std::cout<<	"Ataque:"<<_Elenco[i]->get_ForcaAtaque()<<" "<<"Defesa:"<<_Elenco[i]->get_ForcaDefesa()<<std::endl;
    std::cout<<std::endl;

}

std::cout<<"Treinador:"<<_Tecnico->get_nome()<< " ";
std::cout<<" Estilo do treinador:"<<_Tecnico->get_tipo()<<std::endl;



}


float times::atacando() {//retorna for�a de ataque do time, que � a media dos atributos dos jogadores com alguns incrementos como: estilo do treinador, destaques individuais(estrela)

int i;
int k=0;
int ataque=0;
bool Boost;


for(i=0;i<int(_Elenco.size());i++){
    if(_Elenco[i]->get_posicao()=="Goleiro") {

        k++;

    } else {

        ataque+=_Elenco[i]->get_ForcaAtaque();

        Boost=_Elenco[i]->get_estrela();

        if (Boost==true&&_Elenco[i]->get_posicao()=="Ofensivo") {
            ataque+=10;
	} }
}
ataque/=(_Elenco.size()-k );

ataque+=_Tecnico->get_ataque();

return(ataque);
}

float times:: defendendo ()  {//retorna for�a de defesa do time, que � a media dos atributos dos jogadores com alguns incrementos como: estilo do treinador, destaques individuais(estrela)

int i;
int defesa=0;
bool Boost;


for(i=0;i<int(_Elenco.size());i++){
	defesa+=_Elenco[i]->get_ForcaDefesa();

	Boost=_Elenco[i]->get_estrela();

    if (Boost==true&&(_Elenco[i]->get_posicao()=="Defensor"||_Elenco[i]->get_posicao()=="Goleiro") ) {
    defesa+=10;

	}
}
defesa/=_Elenco.size();

defesa+=_Tecnico->get_defesa();

return(defesa);


}


bool times:: get_user(){ // fun��o que retorna um variavel booleana, se for true indica que o time em quest�o esta sendo usado pelo usuario, caso contrario � false

	return(_time_usuario);



}

void times::set_user(bool w) { // fun��o que retorna um variavel booleana, se for true indica que o time em quest�o esta sendo usado pelo usuario, caso contrario � false
	this->_time_usuario=w;
    cout<< "Sua equipe: " + this->get_escudo();
    cout << "\n";
}

void times::Fez_gol(int n){
this->Gols+=n;
}
void times:: Zerar_gol(){

this->Gols=0;
}


int times:: get_Gols(){

return (this->Gols);
}


void times:: Change_manager() {

    std::string novo_tipo;
    std::string nome=this->_Tecnico->get_nome();

    novo_tipo=this->_Tecnico->ValidaTecnico();

    this->_Tecnico= new tecnico (novo_tipo,nome);









}



