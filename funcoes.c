#include <stdio.h>
#include <stdlib.h>

/*1. implementar funcao que recebe a e b e coloca o valor de a em b e de b em a*/

/*foram utilizados dois ponteiros a e b e depois a=b e b=a. ou seja, a aponta para
o endereco de memoria de b e vice versa*/
void trocarValor(int* a, int* b){
        a = b;
        b = a;
}

/*2. implemente uma funcao que recebe a e b, se forem iguais retorna 0, se a for menor retorna um 
numero negativo, se nao um numero positivo*/

int retornarValor(int a, int b){
        scanf("%d %d", &a, &b);

        if (a == b){
            return 0;
        }
        else if (a < b){
            return -1;
        }
        else{
            return 1;
        }
}

/*3. implementar funcao que recebe o vetor v, compare o primeiro elemento com o próximo elemento adjacente.
se o primeiro elemento for maior que o próximo, troque suas posições. continue comparando e trocando
os elementos adjacentes ao longo da lista. ao final da primeira iteração, o maior elemento estará na
última posição da lista. repita os passos, percorrendo a lista novamente, mas ignorando a última
posição. continue repetindo esse processo até que não ocorram mais trocas durante uma iteração
completa. retorne o número de trocas feitas */

/*a funcao recebe n (tamanho do vetor v) e v*/
int recebeVetor(int n, int v[]){
/*variaveis auxiliares dos lacos e o numero de trocas inicial, que eh 0*/
        int trocas = 0, i, j, k;

/*laco de ordenacao feito com algoritmo insertion sort*/
        for (i = 1; i < n; i++){
/*enquanto i < n, k recebe o vetor atual e j recebe o valor da iteracao anterior*/
            k = v[i];
            j = i - 1;

/*enquanto o vetor de tamanho j for maior que k (que eh v[i]), v[j+1] recebe v[j], que o vetor 
da iteracao atual, j sofre decremento e trocas sofre um incremento*/
            while (j >= 0 && v[j] > k){
                v[j + 1] = v[j];
                j = j - 1;
                trocas = trocas + 1;
            }
            v[j + 1] = k;
        }
/*retorna o valor de trocas para a main*/
    return trocas;
}

int main(int argc, char** argv) {
    int n;
    scanf(" %d", &n);

    int v[n];

/*le os termos do vetor*/
    for (int i = 0; i < n; i++) {
        scanf(" %d", &v[i]);
    }

/*faz as trocas de termos necessarias*/
    int trocas = recebeVetor(n, v);

/*imprime os termos do vetor depois das trocas*/
    for (int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }

    printf("\n");
    printf("Foram feitas %d trocas\n", trocas);

    return 0;
}
