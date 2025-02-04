# So Long

**So Long** é um pequeno jogo em 2D desenvolvido como parte do currículo da 42 Rio. O projeto tem como objetivo criar um jogo simples utilizando a biblioteca **MiniLibX**, manipulando imagens, eventos do teclado e gerenciamento de janelas. O jogo consiste em guiar um personagem através de um mapa, coletando itens e alcançando a saída enquanto evita obstáculos.

## Objetivo do Projeto

O objetivo do **so_long** é desenvolver um jogo simples baseado em mapas formatados como arquivos `.ber`. O projeto ensina conceitos de renderização 2D, manipulação de eventos e lógica de movimentação em jogos, além de reforçar a organização do código e o uso da **MiniLibX**.

## Tecnologias Utilizadas

- **C**: Linguagem de programação utilizada para o desenvolvimento.
- **MiniLibX**: Biblioteca gráfica usada para renderização e manipulação de eventos.
- **Makefile**: Para automação do processo de compilação.

## Instalação

Para compilar e executar o projeto, certifique-se de ter a **MiniLibX** instalada no seu sistema.

1. Clone o repositório:
   ```bash
   git clone https://github.com/rubens-maldonado/SO-LONG.git
   cd SO_LONG

2. Compile o projeto:
   ```bash
    make

## Como Jogar

1. Para iniciar o jogo, execute:
   ```bash
   ./so_long maps/map.ber

  - **Opções de mapa**: map2.ber, map3.ber ou map4.ber

2. Controles do jogo:
   - **W** ou Seta para cima → Mover para cima
   - **A** ou Seta para esquerda → Mover para a esquerda
   - **S** ou Seta para baixo → Mover para baixo
   - **D** ou Seta para direita → Mover para a direita
   - **ESC** → Fechar o jogo

## Regras do Mapa

O mapa do jogo é composto por diferentes tipos de elementos que devem seguir a seguinte convenção:

   - **1**: Paredes, que bloqueiam a movimentação do jogador.
   - **P**: Player, ponto de início do jogador no mapa.
   - **0**: Chão, onde o jogador pode se mover.
   - **E**: Exit (saída), que o jogador deve alcançar para completar o nível.
   - **C**: Moeda, que o jogador deve coletar antes de poder acessar a saída.

O jogador deve coletar todas as moedas (C) no mapa antes de alcançar a saída (E), sempre evitando as paredes (1) e navegando pelo chão (0). O jogo termina quando o jogador atinge a saída.
  - **Atenção**: Mapas inválidos ou mal formatados não devem ser aceitos pelo jogo.


## Exemplo de Execução

1. Exemplo de um mapa válido:
   ```ber
   111111
   1P0C01
   101001
   1C0E11
   111111
2. Executando o jogo com esse mapa:
   ```bash
    ./so_long maps/exemplo.ber

3. O jogo abrirá uma janela com o personagem e os elementos do mapa.
