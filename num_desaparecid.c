#include <stdio.h>

/*funcao vazia (nao retorna nada) para preencher os termos do vetor v de tamanho N*/
void preencher(int N, int v[]) {
/*laco ate N-1 pois o vetor eh iniciado em 0*/
    for (int i = 0; i < N - 1; i++) {
        scanf("%d", &v[i]);
    }
}

/*funcao vazia (nao retorna nada) para ordenar vetor v usando base de algoritmo insertion sort*/
void ordenar(int v[], long int N) {
/*lacos ate N-1 pois o vetor eh iniciado em 0*/
    int i, j, x;
    for(i = 1; i < N; i++) {
        x = v[i];
        j = i - 1;
    while(j >= 0 && v[j] > x) {
        v[j+1] = v[j];
        j--;
    }
        v[j+1] = x;
    }
}

/*funcao encntrar que retorna um inteiro r*/
int encontrar(int v[], int N) {
/*como so um numero esta faltando, a soma da sequencia seq eh calculada por
(N + 1) * (N + 2) / 2 => 2seq - 2 =  N^2 + 3N)*/
    int seq = (N + 1) * (N + 2) / 2;
    int seq1 = 0;
    int i = 0;
/*enquanto a iteracao for menor que o valor N, seq1 tem o vetor[i] somado ao seu valor atual*/
    while (i < N) {
        seq1 = seq1 + v[i];
        i++;
    }
/*r = resultado da diferencia entre a seq e o valor final seq1, que eh o numero desc.*/
    int r = seq - seq1;
    return r;
}

int main(void) {
    long int N, n;
    scanf("%ld", &N);
    int v[N - 1];

    preencher(N, v);
    ordenar(v, N - 1);

/*n eh o numero desconhecido, que sera obtido pelo uso da funcao encontrar*/
    n = encontrar(v, N - 1);
    printf("Numero desaparecido: %ld\n", n);

    return 0;
}