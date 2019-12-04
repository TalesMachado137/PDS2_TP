#include "partida.h"
#include <stdio.h>
#include <stdlib.h>
#include <times.h>
#include<conio.h>

times* Partida::prorrogacao(times*A, times*B) {
std::cout<<"O jogo ficou empatado e vai para prorrogacao:"<<std::endl;
std::cout<<A->get_escudo()<<" "<<A->get_Gols() << " X ";
std::cout<<B->get_Gols() << " " << B->get_escudo()<<std::endl;
std::cout<<endl;

times * winner;
const int PRORROGACAO= 3;
const int LIMIAR_DE_ATAQUE= 200;
const int possibilidade0=0;
const int possibilidade1=4;
const int possibilidade2= 8;
const int possibilidade3= 12;
const int possibilidade4=16;
const int VALOR_DE_ENTER=13;
float dif1,dif2;
float ataque1,ataque2;
float defesa1,defesa2;
const float aleatorio_0_a_1=10;
float aleatorio;
int k;
char go;

for(k=0;k<PRORROGACAO;k++){ //prorroga��o
       ataque1=float (A->atacando() *(rand()%10));
       ataque1/=aleatorio_0_a_1;
       defesa1=float (A->defendendo() *(rand()%10));
       defesa1/=aleatorio_0_a_1;

       ataque2=float (B->atacando() *(rand()%10));
       ataque2/=aleatorio_0_a_1;
       defesa2=float (B->defendendo() *(rand()%10));
       defesa2/=aleatorio_0_a_1;

       dif1=ataque1-defesa2;
       dif2=ataque2-defesa1;

      if(dif1>LIMIAR_DE_ATAQUE)
        A->Fez_gol(rand()%2);
      if(dif2>LIMIAR_DE_ATAQUE)
        B->Fez_gol(rand()%2);
}
if(A->get_Gols()!=B->get_Gols()) {
std::cout<<"Resultado da prorrogacao:"<<std::endl;
std::cout<<endl;

std::cout<<A->get_escudo()<<" "<<A->get_Gols() << " X ";
std::cout<<B->get_Gols() << " " << B->get_escudo()<<std::endl;
std::cout<<endl;
}
//Penalidades
else{
std::cout<<"O jogo foi para os penaltis."<<std::endl;
std::cout<<endl;
    A->Zerar_gol();
    B->Zerar_gol();
    int aux1 = rand();
    while(aux1 > 5 || aux1 < 0){
        aux1 = rand();
    }
    int aux2 = rand();
    while(aux2 > 5 || aux2 < 0){
        aux2 = rand();
    }

    if(aux1 == aux2){
        aux1 = rand();
        aux2 = rand();
        if(aux1 > aux2){
            A->Fez_gol(1);
        }else {
            B->Fez_gol(1);
        }
    }

    A->Fez_gol(aux1);
    B->Fez_gol(aux2);
std::cout<<"Resultado das Penalidades:"<<std::endl;
std::cout<<endl;

std::cout<<A->get_escudo()<<" "<<A->get_Gols() << " X ";
std::cout<<B->get_Gols() << " " << B->get_escudo()<<std::endl;
std::cout<<endl;
}


std::cout<<std::endl<<"Para continuar de ENTER "<<std::endl;

while(int(go)!=VALOR_DE_ENTER) {
       go=getch();
       if(int(go)==VALOR_DE_ENTER)
           break;
        else
        std::cout<<"Comando invalido! Digite novamente! "<<std::endl<<std::endl;
}
if(A->get_Gols()>B->get_Gols()) {
        winner=A;
    } else {
        winner=B;
    }
    winner->Zerar_gol();
return (winner);
}

times* Partida:: partida (times*A, times*B){

const int NUMERO_DE_TEMPOS=4;
char go;
int i;
float dif1,dif2;

float ataque1,ataque2;
float defesa1,defesa2;

const int LIMIAR_DE_ATAQUE_MIN=-200;
const int LIMIAR_DE_ATAQUE_MAX=200;
const float aleatorio_0_a_1 = 12;
const char VALOR_DE_ENTER=13;

times*winner;

for(i=0;i < (NUMERO_DE_TEMPOS);i++){
    go='a';
    ataque1=float ((float)A->atacando() *(rand()%15));
    defesa1=float ((float)A->defendendo() *(rand()%15));
    ataque2=float ((float)B->atacando() *(rand()%15));
    defesa2=float ((float)B->defendendo() *(rand()%15));

    dif1=ataque1-defesa2;
    dif2=ataque2-defesa1;

    if(dif1>LIMIAR_DE_ATAQUE_MIN&&dif1<=LIMIAR_DE_ATAQUE_MAX) {
        A->Fez_gol(rand()%5);
    }else if (dif1>LIMIAR_DE_ATAQUE_MAX) {
        A->Fez_gol(rand() % 3);
    }
      if(dif2>LIMIAR_DE_ATAQUE_MIN&&dif2<=LIMIAR_DE_ATAQUE_MAX){
          float aux1 = (rand()%5);
          B->Fez_gol(aux1);
      }
      else if(dif2>LIMIAR_DE_ATAQUE_MAX)
         B->Fez_gol(int(rand()%3));
}
if(A->get_Gols()==B->get_Gols() ) {
      winner=this->prorrogacao(A,B);
    } else {

    std::cout<<"Resultado da Partida:"<<std::endl;
    std::cout<<std::endl;

    std::cout<<A->get_escudo()<<" "<<A->get_Gols() << " X ";
    std::cout<<B->get_Gols() << " " << B->get_escudo()<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl<<"Para continuar de ENTER "<<std::endl;
while(int(go)!=VALOR_DE_ENTER) {
       go=getch();
       if(int(go)==VALOR_DE_ENTER)
           break;
        else
        std::cout<<"Comando invalido! Digite novamente! "<<std::endl<<std::endl;
        }
if(A->get_Gols()>B->get_Gols()) {
        winner=A;
    } else {
       winner=B;
    }
    winner->Zerar_gol();
}
    return (winner);
}

times* Partida:: partida_usuario (times*A, times*B) {

const int NUMERO_DE_TEMPOS= 4;
int i;
float dif1,dif2;
float ataque1,ataque2;
float defesa1,defesa2;
char go;
bool done=false;
const int LIMIAR_DE_ATAQUE_MIN=-200;
const int LIMIAR_DE_ATAQUE_MAX=200;
const float aleatorio_0_a_1 = 12;
const char VALOR_DE_ENTER=13;

std::vector<std::string> Tempos;
Tempos.push_back("Primeiro");
Tempos.push_back("Segundo");
Tempos.push_back("Terceiro");
Tempos.push_back("Quarto");

std::string resposta;

times*winner;

std::cout<<"Sua equipe vai jogar,fique atento ao desenrolar de cada tempo!!"<<std::endl;

for(i=0;i<NUMERO_DE_TEMPOS;i++){
        go='a';
        done=false;

        ataque1=float ((float)A->atacando() *(rand()%15));
        defesa1=float ((float)A->defendendo() *(rand()%15));
        ataque2=float ((float)B->atacando() *(rand()%15));
        defesa2=float ((float)B->defendendo() *(rand()%15));

        dif1=ataque1-defesa2;
        dif2=ataque2-defesa1;

      if(dif1>LIMIAR_DE_ATAQUE_MIN&&dif1<=LIMIAR_DE_ATAQUE_MAX)
        A->Fez_gol(rand()%5);
      else if (dif1>LIMIAR_DE_ATAQUE_MAX)
        A->Fez_gol((rand()%3));

      if(dif2>LIMIAR_DE_ATAQUE_MIN&&dif2<=LIMIAR_DE_ATAQUE_MAX)
       B->Fez_gol((rand()%5));
      else if(dif2>LIMIAR_DE_ATAQUE_MAX)
         B->Fez_gol((rand()%3));

    std::cout<<std::endl;
    std::cout<<"Resultado do " <<Tempos[i]<<" tempo: "<<std::endl;
    std::cout<<A->get_escudo()<<" "<<A->get_Gols() << " X ";
    std::cout<<B->get_Gols() << " " << B->get_escudo()<<std::endl;
    std::cout<<std::endl;

    if(Tempos[i]!="Quarto") {
    std::cout<<"Deseja mudar o estilo do treinador ?";

    while (done==false) {
         std::cout<<"Responda com sim ou nao."<<std::endl;
         std::cin>>resposta;

        if(resposta=="sim"){
                this->new_style();
                 done=true;
                 break;
        }
        else if (resposta=="nao") {
                done=true;
                 break;
        } else {
            std::cout<<"Entrada invalida!Digite novamente!"<<std::endl<<std::endl; }
}}
std::cout<<"Para continuar de ENTER "<<std::endl;
    while(int(go)!=VALOR_DE_ENTER) {
       go=getch();
        if(int(go)==VALOR_DE_ENTER)     break;
           else
std::cout<<"Comando invalido! Digite novamente! "<<std::endl<<std::endl;
}}
if(A->get_Gols()==B->get_Gols() ) {
      std::cout<<"Parece que o jogo empatou e vai para prorrogacao"<<std::endl;
      std::cout<<"Aguarde na torcida e veja o resultado"<<std::endl;
      std::cout<<"Deseja mudar o estilo do treinador ?";
       done=false;
          std::string nova_resposta;
while (done==false) {
            std::cout<<"Responda com sim ou nao."<<std::endl;
            std::cin>>nova_resposta;
if(nova_resposta=="sim"){
                this->new_style();
                 done=true;
                 break;
                 }
else if (nova_resposta=="nao") {
                done=true;
                 break;
} else std::cout<<"Entrada invalida!Digite novamente!"<<std::endl<<std::endl;
}
winner=this->prorrogacao(A,B);
      } else {

    std::cout<<"Resultado da Partida:"<<std::endl;
    std::cout<<endl;

    std::cout<<A->get_escudo()<<" "<<A->get_Gols() << " X ";
    std::cout<<B->get_Gols() << " " << B->get_escudo()<<std::endl;
    std::cout<<endl;

    if(A->get_Gols()>B->get_Gols()) {
        winner=A;
    } else {
       winner=B;
    }
    winner->Zerar_gol(); }
    return (winner); }

    void Partida::new_style(){
     int i;
     for(i=0;i<int(Fase.size());i++)
          if(Fase[i]->get_user()==true)
               break;
    Fase[i]->Change_manager();
}



