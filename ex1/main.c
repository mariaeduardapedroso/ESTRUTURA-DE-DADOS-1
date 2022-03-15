#include <stdio.h>
#include <stdlib.h>
void TotMin(int TotalMinutos,int* Horas,int* Minutos){
    *Minutos=TotalMinutos%60;
    *Horas=(TotalMinutos-*Minutos)/60;

}
int main()
{
    int horas,minutos;
    TotMin(121,&horas,&minutos);
    printf("%dh %dmin",horas,minutos);
    return 0;
}
