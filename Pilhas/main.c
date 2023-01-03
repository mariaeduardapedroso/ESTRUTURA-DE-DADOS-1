#include <stdio.h>
#include <stdbool.h>
#define TAMANHO 10
/*
pilha estatica:
int vetor
topo (int)*/
// DEFINIÇÃ DO TIPO ABSTRATO E PILHA
typedef struct
{
    int vetor[TAMANHO];
    int topo;
} PilhaEstatica;

//------------verificar se pilha ta vazia-----------------
bool EstaVazia(PilhaEstatica *pilha)
{
    return (pilha->topo == -1);
}
//-------------------------------------------------------

//------------verificar se pilha ta cheia-----------------
bool EstaCheia(PilhaEstatica *pilha)
{
    return (pilha->topo == TAMANHO - 1);
}
//----------------------------------------------------=---

//--------------TAMANHO PILHA-----------------------------
int tamanhoPilha(PilhaEstatica *pilha)
{
    return (pilha->topo + 1);
}
//--------------------------------------------------------

//------------IMPRIMIR A PILHA----------------------------
void ImprimePilha(PilhaEstatica *pilha)
{
    printf("Pilha = [");
    for (size_t i = 0; i < pilha->topo; i++)
    {
        printf("%d", pilha->vetor[i]);
    }

    printf("]");
}
//--------------------------------------------------------

//------------INICIALIZAÇÃO DA PILHA----------------------
void InicializaPilhaEstatica(PilhaEstatica *pilha)
{
    // atribuir -1 para topo
    pilha->topo = -1;
}
//--------------------------------------------------------

//---------------------EMPILHAR (PUSH)--------------------
void empilharPilha(PilhaEstatica *pilha, int x)
{

    // verificar se esta cheia
    // true: não faz nada
    // false: posso inserir
    // topo++
    // vetor[topo]=x;
    if (EstaCheia(pilha))
    {
    }
    else
    {
        pilha->topo++;
        pilha->vetor[topo] = x;
    }
}
//--------------------------------------------------------

//-------------------DESEMPILHAR (POP)--------------------
int DesimpilharPilha(PilhaEstatica *pilha){
/*
SE VAZIA :FAZ NADA
SENÃO:
Salvar topo
topo--
retorno(var)
*/
int aux=-999;
if (EstaVazia(pilha)){
printf("Warning");
}else{
    aux=pilha->vetor[pilha->topo]
    pilha->topo--;
}
return aux;
}
//--------------------------------------------------------
int main(int argc, char *argv[])
{
    PilhaEstatica p;

    InicializaPilhaEstatica(&p);

    ImprimePilha(&p);

    empilharPilha(&p, 42);

    DesimpilharPilha(&p);

    int tam = tamanhoPilha(&p);
    printf("Tamanho pilha %d", tam);

    if (EstaVazia(&p))
    {
        printf("Esta vazia");
    }
    else
    {
        printf("algo dentro");
    }   

if (EstaCheia(&p))
{
    printf("Esta vazia");
}
else
{
    printf("algo dentro");
}
return 0;
}