//Cria um quarto algarismo

#include <stdio.h>

int main () {
    int valoreal, result;

    printf ("Digite um numero de tres algarismos:\n");
    scanf ("%d", &valoreal);
    result= valoreal*10 +(valoreal%10 + ((valoreal%100)/10)*3 + (valoreal/100)*5)%7;
    printf ("O numero com quatro algarismos eh:\n%d", result);    
    
    return 0;
}
