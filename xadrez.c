#include <stdio.h>

int main () {

    int i;

//mover a torre 5 casas para a direita
    for (i = 0; i < 5; i++)
    {
        printf("Direita\n"); //imprime a direcao do movimento
    }


//mover bispo 5 casas para a diagona para cima e direita
    for (i = 0; i < 5; i++)
    {
        printf("Cima Direita\n");
    }
    
//move a rainha 8 casas para a esquerda
    for (i = 0; i < 8; i++)
    {
       printf ("Esquerda\n");
    }
    
    

    return 0;
}