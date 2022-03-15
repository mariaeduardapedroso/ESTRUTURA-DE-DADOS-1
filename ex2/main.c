#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *arq1,*arq2;

    arq1=fopen("entrada.txt","r");
    arq2=fopen("saida.txt","w");
    char caractere;
    int contador=0;

    if (arq1 == NULL || arq2==NULL)
    {
        printf("ERRO abertura de arquivo");
        return(0);
    }

    while(!feof(arq1))
    {
        caractere=fgetc(arq1);
        if (caractere=='a'||caractere=='e'||caractere=='i'||caractere=='o'||caractere=='u'||caractere=='A'||caractere=='E'||caractere=='I'||caractere=='O'||caractere=='U')
        {
            fputc('*',arq2);
        }
        else
        {
            if (caractere=='\n')
            {
                contador++;
                fputc(caractere,arq2);
            }
            else
            {
                if(caractere!=EOF)
                fputc(caractere,arq2);
            }
        }
    }

    printf("%d linhas",contador);

    fclose(arq1);
    fclose(arq2);
    return 0;
}
