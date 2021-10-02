//Calcula a restência equivalente entre 3 resistores

//Bibliotecas
#include <stdio.h>

int main () {
    //Variáveis
    float r1, r2, r3, re, reaux;

    //Valores dos tres resistores
    printf ("\nInsira o valor dos tres resistores:\n");
    scanf ("%f%f%f", &r1, &r2, &r3);
    //Calculo da resistencia equivalente
    reaux = (1/r1) + (1/r2) + (1/r3);
    re = 1/reaux;
    //Resultado
    printf ("\nA resistencia equivalente do circuito eh: %.2f", re);

    return 0;
}
