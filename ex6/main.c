#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char valor;
    char naipe;
    int foiJogada;
} Carta;

typedef struct
{
    Carta array[54];
} Baralho;

void criaBaralho(Baralho *baralho);
//inicia um novo baralho criando todas as cartas nele contido.

int cartasNaoJogadas(Baralho *baralho);
//Consulta o n´umero de cartas dispon´ıveis para jogo.

Carta topo(Baralho *baralho);
//Consulta a carta do topo de um baralho.

Carta fundo(Baralho *baralho);
//Consulta a carta do fundo de um baralho.

Carta* carteado(Baralho *baralho);
//Retorna um array com 3 cartas aleat´orias para um jogador;

int main()
{
    Baralho baralho;

    criaBaralho(&baralho);
    printf("%d",cartasNaoJogadas(&baralho));
    imprimeBaralho(&baralho);


    return 0;
}

criaBaralho(Baralho* baralho)
{
    int cont=0;
    for (int i=0; i<4; i++)
    {
        for(int j=1; j<=13;j++)
        {
            Baralho->array[cont]->foiJogada = 0;
            switch(i)
            {
            case 0:
                Baralho->array[cont].naipe='c';
                break;

            case 1:
                Baralho->array[cont].naipe='e';
                break;

            case 2:
                Baralho->array[cont].naipe='p';
                break;

            case 3:
                Baralho->array[cont].naipe='o';
                break;
            }

            switch(j)
            {
            case 1:
                Baralho->array[cont].simbolo = 'a';
                break;

            case 2:
                Baralho->array[cont].simbolo = '2';
                break;

            case 3:
                Baralho->array[cont].simbolo = '3';
                break;

            case 4:
                Baralho->array[cont].simbolo = '4';
                break;

            case 5:
                Baralho->array[cont].simbolo = '5';
                break;

            case 6:
                Baralho->array[cont].simbolo = '6';
                break;

            case 7:
                Baralho->array[cont].simbolo = '7';
                break;

            case 8:
                Baralho->array[cont].simbolo = '8';
                break;

            case 9:
                Baralho->array[cont].simbolo = '9';
                break;

            case 10:
                Baralho->array[cont].simbolo = '10';
                break;

            case 11:
                Baralho->array[cont].simbolo = 'k';
                break;

            case 12:
                Baralho->array[cont].simbolo = 'j';
                break;

            case 13:
                Baralho->array[cont].simbolo = 'q';
                break;

            }

            cont++;
        }
    }
}

int cartasNaoJogadas(Baralho *baralho){
cont=0;
for (i=0;i<54;i++){
    if (baralho->array.foiJogada==0){
        cont++
    }
}

return cont;
}


void imprimeBaralho(Baralho *baralho) {
  for(int j = 0; j < 13; j++) {
    for(int i = 0; i < 4; i++) {
      printf("%c,%c,%d", baralho[cont]->array.valor, baralho[cont]->array.naipe, baralho[cont]->array.foiJogada);
    }
    printf("\n");
  }
}
