#include <iostream>
#include "pessoa.h"
#include "jogador.h"
#include<vector>
#include "times.h"
#include <stdlib.h>
#include "Torneio.h"
#include "tecnico.h"

int main()
{
    srand(time_t(NULL));

    Jogador* Emanuel_Pedro= new Jogador("Emanuel Pedro",false,"Goleiro",10,95);
    Jogador* Vitor_Soiares= new Jogador("Vitor Soiares",true,"Defensor",54,78);
    Jogador* Gustavo_Curvelindo= new Jogador("Gustavo Curvelindo",false,"Defensor",76,31);
    Jogador* Luis_Cabeca= new Jogador("Luis Cabeca",true,"Atacante",84,33);
    Jogador* Fernando_Pexe= new Jogador("Fernando Pexe",false,"Atacante",88,22);
    tecnico* Galo= new tecnico("Retranqueiro","Galo");

    std::vector<Jogador*> Png;
    Png.push_back(Emanuel_Pedro);
    Png.push_back(Vitor_Soiares);
    Png.push_back(Gustavo_Curvelindo);
    Png.push_back(Luis_Cabeca);
    Png.push_back(Fernando_Pexe);

    times* Icex_FC= new times(Png, Galo, "Icex FC", false);

    ///////////////////////////////////////////////////////////////////

    Jogador* Gustavo_Grandao= new Jogador("Gustavo Grandao",true,"Goleiro",40,88);
    Jogador* Diego_Imparavel= new Jogador("Diego Imparavel",false,"Defensor",70,50);
    Jogador* Jose_Formiga= new Jogador("Jose Formiga",true,"Defensor",81,30);
    Jogador* Alexandre_Pato= new Jogador("Alexandre Pato",true,"Atacante",80,38);
    Jogador* Davi_Furano= new Jogador("Davi Furano",false,"Atacante",98,45);
    tecnico* Jonathan= new tecnico("Atacante","Jonny");

    std::vector<Jogador*> timezin;
    timezin.push_back(Gustavo_Grandao);
    timezin.push_back(Diego_Imparavel);
    timezin.push_back(Jose_Formiga);
    timezin.push_back(Alexandre_Pato);
    timezin.push_back(Davi_Furano);

    times* Sao_Pedro = new times(timezin, Jonathan, "Sao Pedro", false);

    ///////////////////////////////////////////////////////////////////

    Jogador* Arthur_Jorg= new Jogador("Arthur Jorg",true,"Goleiro",31,92);
    Jogador* Enzo_Ferdinando= new Jogador("Enzo Ferdinando",false,"Defensor",63,64);
    Jogador* Guilherme_Tubarao= new Jogador("Guilherme Tubarao",false,"Defensor",65,50);
    Jogador* Lucas_Balde= new Jogador("Lucas Balde",true,"Atacante",76,34);
    Jogador* Henrique_Santana= new Jogador("Henrique Santana",true,"Atacante",80,30);
    tecnico* Mano = new tecnico("Retranqueiro","Mano");

    std::vector<Jogador*> team;
    team.push_back(Arthur_Jorg);
    team.push_back(Enzo_Ferdinando);
    team.push_back(Guilherme_Tubarao);
    team.push_back(Lucas_Balde);
    team.push_back(Henrique_Santana);

    times* Eng_UFMG = new times(team, Mano, "Engenharia UFMG", false);

    ///////////////////////////////////////////////////////////////////


    Jogador* Nikolas_Leopoldo= new Jogador("Nikolas Leopoldo",false,"Goleiro",22,98);
    Jogador* Pedrao_Morais= new Jogador("Pedrao Morais",true,"Defensor",66,64);
    Jogador* Juliano_Jan = new Jogador("Juliano Jan",false,"Defensor",31,48);
    Jogador* Joao_Lapis= new Jogador("Joao Lapis",false,"Atacante",46,52);
    Jogador* Rafael_Monstro= new Jogador("Rafael Monstro",true,"Atacante",94,56);
    tecnico* Lineu= new tecnico("Equilibrado","Lineu");

    std::vector<Jogador*> team1;
    team1.push_back(Nikolas_Leopoldo);
    team1.push_back(Pedrao_Morais);
    team1.push_back(Juliano_Jan);
    team1.push_back(Joao_Lapis);
    team1.push_back(Rafael_Monstro);

    times* Unidos_da_Santa_Helena=new times (team1, Lineu, "Unidos da Santa Helena", false);

    ///////////////////////////////////////////////////////////////////

    Jogador* Thiago_Skatista= new Jogador("Thiago Skatista",false,"Goleiro",49,60);
    Jogador* Adriano_Bolinha= new Jogador("Adriano Bolinha",false,"Defensor",54,56);
    Jogador* Lucas_Monte= new Jogador("Lucas Monte",true,"Defensor",62,64);
    Jogador* Beto_Andradas= new Jogador("Beto Andradas",true,"Atacante",74,60);
    Jogador* Lopes_Miro = new Jogador("Lopes Miro",false,"Atacante",88,30);
    tecnico* Hildo= new tecnico("Equilibrado","Hildo");

    std::vector<Jogador*> team3;
    team3.push_back(Thiago_Skatista);
    team3.push_back(Adriano_Bolinha);
    team3.push_back(Lucas_Monte);
    team3.push_back(Beto_Andradas);
    team3.push_back(Lopes_Miro);

    times*Atletico_de_Muriae=new times (team3, Hildo, "Atletico de Muriae", false);

    ///////////////////////////////////////////////////////////////////

    Jogador* Pedro_Oliva= new Jogador("Pedro Oliva",true,"Goleiro",64,52);
    Jogador* Luks_Back= new Jogador("Luks Back",true,"Defensor",77,48);
    Jogador* Breno_Uzers= new Jogador("Breno Uzers",false,"Defensor",70,50);
    Jogador* Mano_Uise= new Jogador("Mano Uise",true,"Atacante",71,54);
    Jogador* Luiz_Gordo= new Jogador("Luiz Gordo",false,"Atacante",99,19);
    tecnico* Marcelo= new tecnico("Atacante","Marcelo");

    std::vector<Jogador*> team4;
    team4.push_back(Pedro_Oliva);
    team4.push_back(Luks_Back);
    team4.push_back(Breno_Uzers);
    team4.push_back(Mano_Uise);
    team4.push_back(Luiz_Gordo);

    times*Cefet_MG=new times (team4, Marcelo, "Cefet MG", false);

    ///////////////////////////////////////////////////////////////////

    Jogador* Bruno_Nic= new Jogador("Bruno Nic",false,"Goleiro",22,76);
    Jogador* Guilherme_Boituva= new Jogador("Guilherme Boituva",true,"Defensor",50,50);
    Jogador* Jeanino_Pinheiro= new Jogador("Jeanino Pinheiro",false,"Defensor",42,54);
    Jogador* Sandro_Luan= new Jogador("Sandro Luan",true,"Atacante",60,47);
    Jogador* Sergio_Caetano= new Jogador("Sergio Caetano",true,"Atacante",80,32);
    tecnico* Portgas= new tecnico("Retranqueiro","Portgas");

    std::vector<Jogador*> team2;
    team2.push_back(Bruno_Nic);
    team2.push_back(Guilherme_Boituva);
    team2.push_back(Jeanino_Pinheiro);
    team2.push_back(Sandro_Luan);
    team2.push_back(Sergio_Caetano);

    times*Cruzeiro_Vermelho=new times (team2, Portgas, "Cruzeiro Vermelho", false);

    ///////////////////////////////////////////////////////////////////

    Jogador* Jorge_Aladao= new Jogador("Jorge Aladao",true,"Goleiro",43,68);
    Jogador* Paulo_Deka= new Jogador("Paulo Deka",false,"Defensor",31,64);
    Jogador* Bernardo_Fiat_Uno= new Jogador("Bernardo Fiat Uno",false,"Defensor",43,29);
    Jogador* Oswaldinho_Augusto= new Jogador("Oswaldinho Augusto",true,"Atacante",62,34);
    Jogador* Hulk_Brasileiro= new Jogador("Hulk Brasileiro",true,"Atacante",99,2);
    tecnico* Ziraldo= new tecnico("Equilibrado","Ziraldo");

    std::vector<Jogador*> team5;
    team5.push_back(Jorge_Aladao);
    team5.push_back(Paulo_Deka);
    team5.push_back(Bernardo_Fiat_Uno);
    team5.push_back(Oswaldinho_Augusto);
    team5.push_back(Hulk_Brasileiro);

    times*Dragao_de_Betim=new times (team5, Ziraldo, "Dragao de Betim", false);

    ///////////////////////////////////////////////////////////////////

    std::vector<times*> quartas;
    std::vector<times*> semi;
    std::vector<times*> Final;
    std::vector <times*> Campeao;
    quartas.push_back(Icex_FC);
    quartas.push_back(Sao_Pedro);
    quartas.push_back(Eng_UFMG);
    quartas.push_back(Unidos_da_Santa_Helena);
    quartas.push_back(Atletico_de_Muriae);
    quartas.push_back(Cefet_MG);
    quartas.push_back(Cruzeiro_Vermelho);
    quartas.push_back(Dragao_de_Betim);

    std::string resposta;
    bool siga=false;

    Torneio Quartas= Torneio (quartas);

    Quartas.get_participantes();

    Quartas.set_time_usuario();
    Quartas.new_style();

    Quartas.sorteio_da_chave();

    char go='a';//"Armazenar o valor lido do teclado"
    std::cout<<std::endl;
    std::cout<<"Aperte ENTER para continuar"<<std::endl;

    while(int(go)!=13)
    {
        go=getch();

        if(int(go)==13)
            break;
        else
            std::cout<<"Comando invalido! Digite novamente. "<<std::endl<<std::endl;
    }

    semi=Quartas.run_fase();

    if(Quartas.get_user_lose()) {
        std::cout<<"Voce perdeu,deseja continuar ? (Responda com 'Sim' ou 'Nao')"<<std::endl;
        while(1)
        {
            std::cin>>resposta;
            if(resposta=="Nao")
                return 0;
            else if (resposta=="Sim") {
                siga=true;
                break; }
            else
                std::cout<< "Entrada invalida! Digite novamente."<<std::endl;
        }
    }

    resposta="Zerar";//"Zerando o valor da string"

    Torneio semifinais= Torneio(semi);

    semifinais.sorteio_da_chave();
    std::cout<<std::endl;
    std::cout<<"Aperte ENTER para continuar"<<std::endl;

    go='a';//"Zerando um tipo char"

    while(int(go)!=13)
    {
        go=getch();

        if(int(go)==13)
            break;
        else
            std::cout<<"Comando invalido! Digite novamente. "<<std::endl<<std::endl;
    }

    Final=semifinais.run_fase();

    if(semifinais.get_user_lose()==true&&siga==false) {
        std::cout<<"Voce perdeu,deseja continuar ? (Responda com 'Sim' ou 'Nao')"<<std::endl;
        while(1)
        {
            std::cin>>resposta;
            if(resposta=="Nao")
                return 0;
            else if (resposta=="Sim")
                break;
            else
                std::cout<< "Entrada invalida! Digite novamente."<<std::endl;
        }
    }

    Torneio fim= Torneio(Final);
    fim.sorteio_da_chave();

    std::cout<<std::endl;
    std::cout<<"Aperte ENTER para continuar"<<std::endl;
    go='a';//"Armazenar o valor lido do teclado"

    while(int(go)!=13)
    {
        go=getch();

        if(int(go)==13)
            break;
        else
            std::cout<<"Comando invalido! Digite novamente. "<<std::endl<<std::endl;
    }
    Campeao=fim.run_fase();

    std::cout<<"Vencedor eh: "<<Campeao[0]->get_escudo()<<std::endl;

    if(fim.get_user_lose()==false) {
        std::cout<<"parabens, vc venceu!!"<<std::endl;
    }
    else  {
        std::cout<<"que pena, vc perdeu..."<<std::endl;


    }

    //del time 1

    delete(Emanuel_Pedro);
    delete(Vitor_Soiares);
    delete (Gustavo_Curvelindo);
    delete(Luis_Cabeca) ;
    delete (Fernando_Pexe);
    delete(Galo);

    delete(Icex_FC);

    //del time 2

    delete ( Gustavo_Grandao);
    delete (Diego_Imparavel);
    delete (Jose_Formiga);
    delete (Alexandre_Pato);
    delete (Davi_Furano);
    delete(Jonathan);

    delete(Sao_Pedro);

    //del time 3
    delete(Arthur_Jorg);
    delete(Enzo_Ferdinando);
    delete (Guilherme_Tubarao);
    delete (Lucas_Balde);
    delete (Henrique_Santana);
    delete (Mano);

    delete (Eng_UFMG);
    //del time 4

    delete(Nikolas_Leopoldo);
    delete(Pedrao_Morais);
    delete(Juliano_Jan);
    delete(Joao_Lapis);
    delete(Rafael_Monstro);
    delete (Lineu);

    delete(Unidos_da_Santa_Helena);

    //del time 5
    delete(Thiago_Skatista);
    delete(Adriano_Bolinha);
    delete(Lucas_Monte);
    delete(Beto_Andradas);
    delete(Lopes_Miro);
    delete(Hildo);

    delete(Atletico_de_Muriae);

    //del time 6
    delete (Pedro_Oliva);
    delete (Luks_Back);
    delete (Breno_Uzers);
    delete (Mano_Uise);
    delete (Luiz_Gordo);
    delete (Marcelo);

    delete (Cefet_MG);

    //del time 7
    delete(Bruno_Nic);
    delete(Guilherme_Boituva);
    delete(Jeanino_Pinheiro);
    delete(Sandro_Luan);
    delete(Sergio_Caetano);
    delete(Portgas);

    delete(Cruzeiro_Vermelho);

//del time 8
    delete(Jorge_Aladao);
    delete(Paulo_Deka);
    delete(Bernardo_Fiat_Uno);
    delete(Oswaldinho_Augusto);
    delete(Hulk_Brasileiro);
    delete(Ziraldo);

    delete(Dragao_de_Betim);

    return 0;
}

