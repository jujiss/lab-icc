#include<stdio.h>

int main(void){

/*N = qntd de termos, i = qntd de vezes que o laço se repete, 
m = variável para mudança de sinal a cada termo*/
int N, i = 1, m = 1;

/*s = soma da sequência, n = termo*/
double s = 0, n;

scanf("%d", &N);

/*enquanto i for menor que N, o laço se repete*/
while (i <= N)
{

/*o termo n será uma fração de 1 sobre a quantidade de vezes que o laço já foi repetido até  entao*/
    n = 1.0/i * m;

/*a soma s será dada pelo valor de s já obtido até então + o novo termo n*/
    s = s + n;

/*soma-se 1 à i para finalizar o laço de soma*/
    i = i + 1;

/*o sinal do termo encontrado no próximo laço é trocado*/
    m = m * (-1);
}

printf("%.4lf\n", s);

    return 0;
}