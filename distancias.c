#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

float x, y, x1, y1, d, d1;
scanf("%f %f %f %f", &x, &y, &x1, &y1);

/*funções que descrevem as distâncias euclidiana e Manhattan*/

d = sqrt(pow((x1-x),2)+pow((y1-y),2));

/*a distância manhattan é dada pela soma dos módulos das diferenças x-x1 e y-y1*/

d1 = (fabs(x-x1))+(fabs(y-y1));

/*imprime com 3 dígitos de precisão*/

printf("Distancia euclidiana: %.3f\n", d);
printf("Distancia Manhattan: %.3f\n", d1);

    return 0;
}