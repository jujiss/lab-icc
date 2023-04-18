#include<stdio.h>
#include<math.h>

int main(){

int n = 3;

/*a, b e c são os números colocados pelo usuário, ma é a m. aritmética, 
mh é a m. harmônica e mg é a m. geométrica*/

float a, b, c, ma, mh, mg;
scanf("%f %f %f", &a, &b, &c);

/*funções matemáticas que descrevem as médias aritmética, harmônica e geométrica, respecticamente*/

ma = (a + b + c)/n;
mh = n/((1/a) + (1/b) + (1/c));
mg = pow((a * b * c), (1.0/n));

/*imprime os valores obtidos nas funções anteriores com 4 dígitos de precisão*/

printf("Media aritimetica: %.4f\n", ma);
printf("Media harmonica: %.4f\n", mh);
printf("Media geometrica: %.4f\n", mg);

    return 0;
}