#include<stdio.h>
#include<math.h>

int main(){
char figura;
scanf("%c", &figura);
float pi = 3.14;
float x, y, a;

/*de acordo com o caracter digitado, um dos casos irá rodar*/
switch (figura)
{

/*se caracter = q, ler um valor para x, que será o valor do lado do quadrado.
a área será dada por x * x*/
case 'q':
    scanf("%f", &x);
    a = pow(x, 2);
    printf("%.2f\n", a);
    break;

/*se caracter = r, ler um valor para x e um para y, que serao os valores da base e da altura.
a área será dada por x * y*/
case 'r':
    scanf("%f %f", &x, &y);
    a = x * y;
    printf("%.2f\n", a);
    break;

/*se caracter = t, ler um valor para x e um para y, que serao os valores da base e da altura.
a área será dada por (x * y)/2*/
case 't':
    scanf("%f %f", &x, &y);
    a = (x * y)/2;
    printf("%.2f\n", a);
    break;

/*se caracter = c, ler um valor para y, que será o valor do raio do circulo.
a área será dada por pi * y*/
case 'c':
    scanf("%f", &y);
    a = pi * pow(y, 2);
    printf("%.2f\n", a);
    break;
}

    return 0;
}