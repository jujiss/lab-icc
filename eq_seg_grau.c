#include <stdio.h>
#include <math.h>

int main(){

int a, b, c, x;

scanf("%d %d %d %d", &a, &b, &c, &x);

long int y = a * pow(x,2) + b * x + c;

/*long int e %ld para imprimir y, que pode ser um valor bem alto, dependendo do x escolhido
a necessidade de atribuir long int ao y surgiu no caso de teste 5*/

printf("%ld\n", y);

    return 0;
}