#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);

/*laco do numero de linhas, sendo i a linha atual*/
    for (i = 1; i <= n; i++) {
/*laco para imprimir os espacos em branco da piramide*/
        for (j = 1; j <= n-i; j++) {
            printf(" ");
        }
/*laco para imprimir os asteriscos da piramide, sendo que a quantidade de asteriscos eh dada pelo
numero da linha atual multiplicado por dois*/
        for (j = 1; j <= 2 * i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
