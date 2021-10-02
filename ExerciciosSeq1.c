
//Lê as coordenadas e imprimi a distancia entre eles 

#include <stdio.h>
#include <math.h>

int main () {
    int x1, x2, y1, y2;
    double distancia;

    printf ("Insira o primeiro par de coordenadas x,y:\n");
    scanf ("%d%d", &x1, &y1);
    printf ("Insira o segundo par de coordenadas x,y:\n");
    scanf ("%d%d", &x2, &y2);
    distancia = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    printf ("A distancia entre os pontos é:\n %lf \n", distancia);

    return 0;
}