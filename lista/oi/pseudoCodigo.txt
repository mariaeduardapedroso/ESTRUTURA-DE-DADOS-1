#include<stdio.h>
#include<stdbool.h>

// PrtNoLista
typedef struct NoLista* PtrNoLista;

// NoLista (alterado)
typedef struct NoLista{
  int elemento;
  PtrNoLista proximo;
  PtrNoLista anterior;
} NoLista;

// ListaDuplamente
typedef struct {
  int qtdeElementos;
  PtrNoLista inicio;
} ListaDupla;

void iniciaListaDupla(ListaDupla *lista) {
  lista->qtdeElementos = 0;
  lista->inicio = NULL;
}

bool estaVaziaListaDupla(ListaDupla *lista) {
  return(lista->inicio == NULL);
}

int tamanhoListaDupla(ListaDupla *lista) {
  return (lista->qtdeElementos);
}

void imprimeListaDupla(ListaDupla *lista) {
  PtrNoLista percorre;
  printf("Lista = {");
  for(percorre = lista->inicio; percorre != NULL; percorre = percorre->proximo) {
    // elem (no lista) -> percorre
    printf("%d ", percorre->elemento);
  }
  printf("}\n");
}

//----------------------------------------------
// Insercao Lista Dupla
// input: lista, valor
//----------------------------------------------
void inserirListaDupla(PtrNoLista *lista, int valor) {
  /*
   criar um novo ptr NoLista (Novo)
   alocar a memoria do Novo
   copiar o valor para o Novo
   Novo = [NoLista = valor, ant, prox]
   */

  /*
   1o caso: lista ta vazia:
      - Inicio aponta para Novo
      - Proximo do Novo é NULL
      - Anterior do Novo é NULL

   2o caso: inserir um elemento < elemento no inicio
      - Anterior do Novo é NULL
      - Proximo do Novo é o Inicio
      - Anteror do Inicio é o Novo
      - Inicio aponta para Novo

   3o caso: percorrer e encontrar a posicao de inserção
      - Percorrer e encontrar o ponto de insercao (Aux)
          * enqto o valor for menor do que o valor presente no auxiliar proximo, avança para o proximo nó
          * parada: aux, cujo aux proximo tem um valor que é maior que o valor que a gente quer inserir

      - Posicao de inserção: Logo após o auxiliar
          * Novo: que é o novo elemento
          * Aux: depois de quem a gente vai inserir

          - Proximo do Novo recebe o proximo do auxiliar (NULL ou não NULL)
          - Se o Proximo do Aux != NULL:
                - Anterior do Proximo do Aux é o Novo
          - Anterior do Novo aponta para o Aux
          - Proximo do Aux aponta para Novo

    // incrementa a qtde de elementos dentro da lista
   */
}


//----------------------------------------------
//----------------------------------------------

int main(int argc, char *argv[]) {
  ListaDupla lista;
  iniciaListaDupla(&lista);
  imprimeListaDupla(&lista);
  printf("\n\n\n\n\nFuncionou\n");
  return 0;
}