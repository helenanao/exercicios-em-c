//último algarismo de um número inteiro
#include <stdio.h>

int main () {
    //variáveis
    int valorint;

    printf ("\nInsira um valor inteiro:\n");
    scanf ("%d", &valorint);
    printf ("\nO ultimo algarismo eh:\n %d ", valorint %10);


    return 0;
}
