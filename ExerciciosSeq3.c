//Lê três valores, calcula e informa ao usuário 

//Bibliotecas
#include <stdio.h> 

int main () {
    //Variáveis
    float a, b, c, medaritm, medharmon;
    
    printf ("Insira tres valores:\n");
    scanf ("%f%f%f", &a,&b,&c);
    //Média aritmética
    medaritm = (a + b + c)/ 3;
    //Média harmõnica
    medharmon = 3/ ((1/a) + (1/b) + (1/c));
    //Resultado
    printf ("A media aritimetica eh: %.2f", medaritm);
    printf ("\n\nA media harmonica eh: %.2f \n", medharmon);
    
    return 0;
}