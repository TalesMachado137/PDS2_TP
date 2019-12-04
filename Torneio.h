#include "times.h"
#include "pessoa.h"
#include "jogador.h"
#include <iostream>
#include<vector>
#include<stdlib.h>
#include <algorithm>
#include <times.h>
#include <conio.h>
#include "partida.h"


class Torneio : public Partida {

private:
    bool usuario_perdeu;

public:
    Torneio (std::vector<times*> times);
    ~Torneio ( );
    void get_participantes();
    void set_time_usuario();
    std::vector<times*> run_fase();

    bool get_user_lose();
    void sorteio_da_chave();






};
