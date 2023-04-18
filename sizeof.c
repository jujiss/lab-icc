#include <stdio.h>

/*%lu significa 'long unsigned', ou seja, essa máscara vai imprimir um valor 
do tipo longo e sem sinal*/

int main(void) {
    printf("%lu\n", sizeof(char));
    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(float));
    printf("%lu\n", sizeof(double));
    printf("%lu\n", sizeof(unsigned char));
    printf("%lu\n", sizeof(signed char));
    printf("%lu\n", sizeof(unsigned int));
    printf("%lu\n", sizeof(signed int));
    printf("%lu\n", sizeof(short int));
    printf("%lu\n", sizeof(long long int));

 /*uso vscode e, nesse programa, utilizei pela primeira vez 'gcc sizeof.c -std=c99 -Wall -o size'
 no terminal para compilar o código nas regras de C99. Não sei se isso muda algo edm relação aos 
 programas anteriores.*/

    return 0;
}
