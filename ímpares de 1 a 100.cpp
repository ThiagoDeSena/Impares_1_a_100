/******************************************************************************

1.Escreva um aplicativo em C que mostra todos os n�meros �mpares de 1 at� 100.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    printf("Aplicativo em C que mostra todos os n�meros �mpares de 1 at� 100\n");
   while(i<=100)
    {
      if(i%2==1){
      printf("%d ",i);
      }
      i++;
    }
    

    return 0;
}


