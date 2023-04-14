#include <stdio.h>

int main()
{

// ao digitar dois numeros inteiros, o programa realizara 5 afirmacoes matematicas
// quando o resultado obtido for 0, a afirmaçao eh falsa
// quando o resultado obtido for 1, a afirmaçao eh verdadeira

    int A, B;
    scanf("%d %d", &A, &B);

    int r1 = A > B ? 1 : 0;
    printf("A > B: %d\n", r1);

    int r2 = A % 2 == 0 ? 1 : 0;
    printf("A eh par: %d\n", r2);

    int r3 = B % 3 != 0 ? 1 : 0;
    printf("B NAO eh multiplo de 3: %d\n", r3);

    int r4 = A > B && A % 2 == 0 ? 1 : 0;
    printf("A > B e A eh par: %d\n", r4);

    int r5 = A > B || A % 2 == 0 ? 1 : 0;
    printf("A > B ou A eh par: %d\n", r5);

    return 0;
}