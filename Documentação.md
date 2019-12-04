# Documentação 
# Classes e uso de orientação a objetos

  Para realizar o trabalho, tive que pensar nas principais tecnicas de orientação a objetos para implementar. As classes utilizadas no projeto foram:
  Pessoa, Jogador, Técnico, Times, Partida, Torneio. 
  
  Cada classe possui seus atributos e métodos que foram implementados. Uma técnica muito importante em OO utilizada foi o uso de Herança, com as classes: Pessoa -> Jogador,Técnico.
  Os métodos e atributos da classe pessoa são herdados pelas classes filhas, como por exemplo o _nome e a _estrela. Estes atributos estão na classe Pessoa, pois todas as classes filhas irão utilizá-los.
  Outra técnica de OO extremamente importante e que foi utilizada foi o uso de composição, com as classes: Torneio -> Times e Times -> Jogador. Pois um time é composto de vários jogadores e um torneio é composto por vários times.
  O uso de polimorfismo também foi importante, pois implementamos os métodos get_ForcaAtaque() e get_ForcaDefesa(), para o jogador e o técnico. também usamos abstração ao usar a classe abstrata pessoa, possuindo métodos abstrados
  ( get_ForcaAtaque() e get_ForcaDefesa() ).
  O Encapsulamento foi muito utilizado, pois todos os métodos estavam complemente auto explicativos com seus nomes em sua interface, assim, qualquer desenvolvedor poderia utilizar as classes e seus métodos sem saber exatamente a forma de que foram implementados.
  O tratamento de exceções foi feito de maneira simples, sem uso de throw, try e catch. Simplesmente validei a entrada do usuário, travando o andamento do código com um while até que ele inserisse o dado esperado.
  O projeto está bem modularizado, pois não existe nenhuma "superclasse" onde todas as regras de negócio são implementadas em conjunto, desacoplando o código e tornando fácil a descoberta de possíveis erros futuros.
  Sobre comentários e endentação, a endentação está bem organizada e a interface do código já é bem auto-explicativa, porém, mesmo assim, ainda há alguns comentários em pontos importantes.
  Sobre testes unitários, não pensei em uma forma de implementá-los em um jogo, exatamente pelo fato do jogo ser imprevisível.
  
  
