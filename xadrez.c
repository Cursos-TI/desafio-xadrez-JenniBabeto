#include <stdio.h>

int main () {

    int i;

//mover a torre 5 casas para a direita
    printf("Mova a Torre 5 casas para a direita\n");
    for (i = 0; i < 5; i++)
    {
        printf("Direita\n"); //imprime a direcao do movimento
    }


//mover bispo 5 casas para a diagona para cima e direita
    printf("Mova o Bispo 5 casas para a diagonal (cima e direita)\n");
    for (i = 0; i < 5; i++)
    {
        printf("Cima Direita\n");
    }
    
//move a rainha 8 casas para a esquerda
    printf("Mova a rainha 8 casas para a esquerda\n");
    for (i = 0; i < 8; i++)
    {
       printf ("Esquerda\n");
    }
    
//mover cavalo duas vezes para cima e uma vez para a direita
printf("Mova o cavalo duas vezes para baixo e uma vez para a direita\n");

int j;

for (i = 1; i <2; i++) //loop externo referente a "direita"
{
    for (j = 0; j < 2; j++) // loop interno referente coluna "baixo"
    {
    printf("Baixo\n");
    
    }
    printf("Direita\n");
}
    

    return 0;
}