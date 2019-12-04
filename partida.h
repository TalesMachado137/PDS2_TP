#include "times.h"
#include "pessoa.h"
#include "jogador.h"
#include <iostream>
#include<vector>
#include<stdlib.h>
#include <algorithm>
#include <times.h>
#include <conio.h>


class Partida {

protected:
std::vector<times*> Fase;

public:

times* partida (times*A, times*B);
times* prorrogacao(times*A, times*B);
times* partida_usuario (times*A, times*B);

void new_style();
};
