#include<stdlib.h>
#include<stdio.h>

int main() {

    int valor;
    int n100, n50, n20, n10, n5, n2, m1;

    scanf("%d", &valor);

    n100 = valor / 100;
    valor = valor % 100;

    n50 = valor / 50;
    valor = valor % 50;

    n20 = valor / 20;
    valor = valor % 20;

    n10 = valor / 10;
    valor = valor % 10;

    n5 = valor / 5;
    valor = valor % 5;

    n2 = valor / 2;
    valor = valor % 2;

    m1 = valor;
    valor = valor % 1;


    printf("%d nota(s) de R$ 100 \n", n100);
    printf("%d nota(s) de R$ 50 \n", n50);       
    printf("%d nota(s) de R$ 20 \n", n20);
    printf("%d nota(s) de R$ 10 \n", n10);
    printf("%d nota(s) de R$ 5 \n", n5);
    printf("%d nota(s) de R$ 2 \n", n2);
    printf("%d moeda(s) de R$ 1 \n", m1);
    
    
    return 0;
}