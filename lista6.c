#include<stdio.h>

/*Faça um programa em C que recebe um número inteiro positivo N como entrada, seguido por N
números inteiros positivos. O programa deve verificar se cada um dos N números é um número 
anti-primo e exibir o resultado correspondente.
O programa deve imprimir "SIM" se o número for um número anti-primo e "NAO" caso contrário.*/

int main(void) {

/*N = qntd de termos na sequencia
d = qntd de divisores do termo atual
D = qntd de divisores do termo anterior
n = termo atual
i, j, k = contagem de iteracoes dos lacos do programa
ap = antiprimo*/

    int N, d = 0, n, i = 0, j, D = 0, ap = 1, k;

/*ponteiro que aponta pra d*/
    int *pd = &d;
/*ponteiro que aponta pra D*/
    int *pD = &D;

    /*printf("Digite um número inteiro positivo que represente a quantidade de termos da sequência: \n");*/
    scanf("%d", &N);

/*laco - enquanto i for menor que a qntd de termos da sequencia*/
    while (i < N) {
        /*printf("Digite o termo: ");*/
        scanf("%d", &n);
    /*mais uma iteracao eh feita*/
        i++;
        *pd = 0;

/*laco para verificar os divisores do termo*/
        for (j = 1; j <= n; j++) {
            if (n % j == 0)
/*o divisor eh adicionado a contagem de divisores*/
                (*pd)++;
        }

/*laco para verificar se o termo eh antiprimo*/
        for (j = 1; j < n; j++) {
            *pD = 0;
/*primeiro, verificar os divisores do termo anterior*/
            for (k = 1; k <= j; k++) {
                if (j % k == 0)
                    (*pD)++;
            }

/*se o numero de divisores do numero anterior for maior ou igual ao
numero de divisores do termo atual, o termo n eh antiprimo*/
            if (*pD >= *pd) {
                ap = 0;
                break;
            }
        }

/*se ap nao for 0 (falso) o numero eh antiprimo*/
        if (ap) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }

    /*reinicia as variaveis para a proxima iteracao*/
        d = 0;
        D = 0;
        ap = 1;
    }

    return 0;
}
