#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void Ler(int *vetor,int N)
{
    for(size_t i=0; i<N; i++)
    {
        scanf("%d", &vetor[i]);
    }
}
int main()
{
    int N;
    int *vetor;

    scanf("%d", &N);

    vetor = malloc(N*sizeof(int));

    Ler(vetor,N);

    for(size_t i=0; i<N; i++)
    {
        printf("%d\t", vetor[i]);
    }

    free(vetor);
    return 0;
}
