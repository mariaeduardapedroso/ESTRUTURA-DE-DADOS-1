#include <stdio.h>
#include <stdlib.h>
int Elevado(int x,int y)
{
    if (y==0)
    {
        return(1);
    }
    else
    {
        return(x*Elevado(x,y-1));
    }
}
int main()
{
    printf("%d",Elevado(2,3));
    return 0;
}
