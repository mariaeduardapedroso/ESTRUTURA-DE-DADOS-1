#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 1ptr no fila
// struct NoFila* -> ptrNoFila (typedef)
typedef struct NoFila *PtrNoFila;

// 2no de fila
typedef struct NoFila
{
    int x;
    PtrNoFila proximo;
} NoFila;

// 3 fila dinamica
typedef struct
{
    PtrNoFila inicio;
    PtrNoFila fim;
    int qtde;
} FilaDinamica;
//----------INICIALIZAÇÃO----------
void iniciaFilaDinamica(FilaDinamica *fila)
{
    fila->inicio = fila->fim = NULL;
    fila->qtde = 0;
}
//-------------------------------------

//------------VERIFICAR SE ESTA VAZIA-----
bool estaVazia(FilaDinamica *fila)
{
    return (fila->qtde == 0);
}
//--------------------------------------

//--------------------TAMANHO------------
int tamanho(FilaDinamica *fila)
{
    return (fila->qtde);
}
//--------------------------------------

//----------------IMPRIMIR---------------
void imprimirFila(FilaDinamica *fila)
{
    PtrNoFila aux;
    printf("Fila = [ ");
    if (fila->inicio == NULL)
    {
        printf(" ");
    }
    else
    {
        for (aux = fila->inicio; aux != NULL; aux = aux->proximo)
        {
            printf("%d ", aux->x);
        }
    }
    printf("]\n");
}
//--------------------------------------

//------------------INSERÇÃO------------
void enfileirar(FilaDinamica *fila, int valor)
{
    /*
    2 ou mais inserção
    cirar novo no
    copiar numeor do no
    proximo do novo no é nulo
    proximo do fim aponta p novo
    atualizar fim fim recebe novo ou fim recebe fim proximo
    contador ++
    */
    PtrNoFila novo = malloc(sizeof(NoFila));

    novo->x = valor;

    novo->proximo = NULL;

    if (estaVazia(fila))
    {
        fila->inicio = novo;
        fila->fim = novo;
    }
    else
    {
        fila->fim->proximo = novo;
        fila->fim = novo;
    }
    fila->qtde++;
}
//-------------------------------------

//----------------REMOÇÃO--------------------
void desenfileirar(FilaDinamica *fila)
{

    if (!estaVazia(fila))
    {
        PtrNoFila aux = fila->inicio;
        if (tamanho(fila) == 1)
        {
            fila->inicio = fila->fim = NULL;
        }
        else
        {
            fila->inicio = fila->inicio->proximo;
        }
        free(aux);
        fila->qtde--;
    }
    else
    {
        printf("Warning não pode remover\n");
    }
}
//-------------------------------------------
int main(/*int argc, char const *argv[]*/)
{
    FilaDinamica f;
    iniciaFilaDinamica(&f);
    int vetor[] = {5, 12, 37, 62, 49, 12};
    int quant;

    if (estaVazia(&f))
    {
        printf("Esta Vazia\n");
    }

    for (int i = 0; i < 6; i++)
    {
        enfileirar(&f, vetor[i]);
        imprimirFila(&f);
    }
    quant = tamanho(&f);
    printf("\nQUANTIDADE %d\n", quant);

    for (int j = 0; j < 7; j++)
    {
        desenfileirar(&f);
        imprimirFila(&f);
    }
    quant = tamanho(&f);
printf("\nQUANTIDADE %d", quant);
    return 0;
}
