#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 20
#define NUM 5

typedef struct
{
    char nome[TAM] ;
    char tipo[TAM];
    int posicao;
} Cadastro;

void Preencher(Cadastro *bandas)
{
    for (size_t i=0; i<NUM; i++)
    {
        printf("Nome:");
        fgets(bandas[i].nome,TAM,stdin);
        fflush(stdin);
        printf("Estilo:");
        fgets(bandas[i].tipo,TAM,stdin);
        printf("Posição:");
        scanf("%d", &bandas[i].posicao);
        fflush(stdin);
    }

}

void Exibe(Cadastro *bandas)
{
    for (size_t i=0; i<NUM; i++)
    {
        printf("\n\n-------Banda %d--------\n",i+1);
        printf("Nome: %s",bandas[i].nome);
        printf("Estilo: %s",bandas[i].tipo);
        printf("Posição: %d",bandas[i].posicao);
    }

}

void Informacao(Cadastro *banda, int num){
    for (size_t i=0; i<NUM;i++){
        if (banda[i].posicao==num){
        printf("\n\n-------Banda %d--------\n",i+1);
        printf("Nome: %s",banda[i].nome);
        printf("Estilo: %s",banda[i].tipo);
        printf("Posição: %d",banda[i].posicao);
        }
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    Cadastro banda[NUM];
    int num=0;
    Preencher(banda);
    Exibe(banda);

    while(num<=0 || num>5){
    printf("\nposição 1 a 5:");
    scanf("%d", &num);
    }

    Informacao(banda,num);
    return 0;
}
