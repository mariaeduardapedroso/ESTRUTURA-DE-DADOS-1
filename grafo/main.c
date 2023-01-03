#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct
{
    int **matriz;  // matriz dinamica
    int vertices;  // quant vertices
    int arestas;   // quant arestas
    bool dirigido; // se é dirigido ou não

} GrafoMatriz;

void iniciaGrafoMatriz(GrafoMatriz *g, int V, bool dir)
{
    g->vertices = V;
    g->arestas = 0;
    g->dirigido = dir;

    g->matriz = malloc(V * sizeof(int *));

    for (int i = 0; i < V; i++)
    {
        g->matriz[i] = malloc(V * sizeof(int));
    }

    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            g->matriz[i][j] = 0;
        }
    }
}

void imprimeGrafoMatriz(GrafoMatriz *g)
{
    int V = g->vertices;

    for (int i = 0; i < V; i++)
    {
        printf("%d ", i);
        for (int j = 0; j < V; j++)
        {
            printf("%d/t", g->matriz[i][j]);
        }
        printf("/n");
    }
}


void insereArestaGrafoMatriz(GrafoMatriz *g,int v1, int v2){
g->matriz[v1][v2] = 1;
if (!g->dirigido)
g->matriz[v2][v1] = 1;

g->arestas++;
}

void removeArestaGrafoMatriz(GrafoMatriz *g,int v1, int v2){
g->matriz[v1][v2] = 0;
if (!g->dirigido)
g->matriz[v2][v1] = 0;

g->arestas--;
}

void destruirGrafoMatriz(GrafoMatriz *g){
for (int i = 0; i < g->vertices; i++)       
{
    free(g->matriz[i]);
}
free(g->matriz);

}

int main(int argc, char const *argv[])
{
    GrafoMatriz g;
    iniciaGrafoMatriz(&g,6,true);
    imprimeGrafoMatriz(&g);

    
    return 0;
}
