#include <time.h>
#include <ctime>
#include"Torneio.h"

//#define NUMERO_DE_TEMPOS 4;

//a parcela rand()%10)/10) cria um numero aleatorio entre 0 e 1;

Torneio::Torneio(std::vector<times*> times){


this->Fase=times;
}

Torneio::~Torneio(){}

void Torneio:: get_participantes () {//Imprime os times presentes no Torneio
int i;
const int VALOR_DE_ENTER=13;
char go;
for (i=0;i<int(Fase.size());i++) {
  go='a';//artificio para "zerar" a variavel tipo char
  std::cout<<"Time"<<" "<<(i+1)<<std::endl;
  std::cout<<std::endl;
  Fase[i]->get_elenco();
  std::cout<<std::endl<<"Para continuar de ENTER "<<std::endl;
  while(int(go)!=VALOR_DE_ENTER) {

       go=getch();

       if(int(go)==VALOR_DE_ENTER)
           break;

        else
        std::cout<<"Comando invalido! Digite novamente! "<<std::endl;
        }}}

void Torneio::set_time_usuario() {// fun��o que permite que o usuario escolha um time
 int choice;
 int done=0;

 while (done==0) {
 std::cout<<"Digite o numero realcionado a equipe desejada:"<<std::endl;
 std::cin>>choice;
 choice--;

 if(choice<0||choice>=int(Fase.size())) {

   std::cout<<"Escolha invalida! Digite novamente!"<<std::endl;

 } else {

    Fase[choice]->set_user(true);
    done=1;
}}}



std::vector<times*> Torneio::run_fase() {
    std::vector<times*> next_fase;
    times*Passou;
    int i=0;
    bool usuario_passou=false;

    for(i=0;i<int(Fase.size());i++) {
        if(Fase[i]->get_user()==true||Fase[i+1]->get_user()==true)
             Passou=this->partida_usuario(Fase[i],Fase[i+1]);
        else
             Passou=this->partida(Fase[i],Fase[i+1]);

         if(Passou->get_user()==true) {
            usuario_passou=true;}

        next_fase.push_back(Passou);
        i++;
}
if(usuario_passou==false)
        this->usuario_perdeu=true;
    else
        this->usuario_perdeu=false;
    return(next_fase); }


bool Torneio::get_user_lose(){
return(this->usuario_perdeu);
}



void Torneio::sorteio_da_chave(){

int k=0;
int t;
int jogo=1;
const int VARIACAO_MIN=5;
const int LIMITE_DE_SORTEIO=15;

srand( (unsigned)time(NULL) );

 if(Fase.size()==2) {
    std::cout<<"A grande final sera disputada entre:"<<std::endl;
    std::cout<<Fase[0]->get_escudo()<<" X "<<Fase[1]->get_escudo();
    std::cout<<std::endl; }


else {
    while (t<VARIACAO_MIN) {
        t=rand()%LIMITE_DE_SORTEIO; }
//Linhas abaixo embaralham o vetor Fase dependendo da multiplicidade de t
    if(t%2==0)
        std::random_shuffle(Fase.begin(), Fase.end());
    else if(t%3==0)
        std::random_shuffle(Fase.begin(), Fase.end());
    else if(t%5==0)
        std::random_shuffle(Fase.begin(), Fase.end());
    else if(t%7==0)
        std::random_shuffle(Fase.begin(), Fase.end());
    else std::random_shuffle(Fase.begin(), Fase.end());

    std::cout<<" O sorteio foi realizado, os confrontos sao: "<<std::endl;
    for(k=0;k<int(Fase.size());k++) {
        std::cout<<" Jogo "<<jogo<<" : ";
        std::cout<<Fase[k]->get_escudo()<<" X "<<Fase[k+1]->get_escudo();
        std::cout<<std::endl;
        k++;
        jogo++;
}}}



