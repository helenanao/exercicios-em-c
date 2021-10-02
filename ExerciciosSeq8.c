//Converte Farenheit em centígrados

//Bibliotecas
#include <stdio.h>

int main ()
{
    //Variáveis
    float fare, cent;

    printf ("\nInsira a temperatura em graus Farenheit:\n");
    scanf ("%f", &fare);
    //casts
    cent = (float)5/ 9 *(fare - 32);
    //resultado
    printf ("\nA temperatura em graus centigrados eh:\n%.1f \n", cent);

    return 0;
}
