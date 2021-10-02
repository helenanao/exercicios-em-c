//indica o custo de fábrica e o custo para o consumidor

//Bibliotecas
#include <stdio.h>

//Constantes
#define IMPOSTO 0.45
#define DISTRIB 0.28

int main () {
    //Variáveis
    float custofab, custoconsu;
    
    //Lê o custo de fábrica
    printf ("Insira o custo de fabrica do carro: \n");
    scanf ("%f", &custofab);
    //Calcula o custo ao consumidor 
    custoconsu = custofab * (IMPOSTO + DISTRIB + 1); 
    printf ("\nO custo ao consumidor eh:\n %f \n\n", custoconsu);
    
    return 0;
}