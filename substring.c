#include <stdio.h>
#include <string.h>

/*maximo de caracteres na string e na substring*/
#define MAX_1 1000
#define MAX_2 500

int main(void) {
    char str[MAX_1];
    char substr[MAX_2];
/*j mostra a quantidade de substrings encontradas na string*/
    int i, j = 0;

/*le a string e a substring e seus tamanhos*/
    fgets(str, sizeof(str), stdin);
    fgets(substr, sizeof(substr), stdin);

/*le a quantidade de caracteres na string e na subtring*/
    int str_len = strlen(str);
    int substr_len = strlen(substr);

/*laco de 0 ate a diferenca entre os comprimentos da string e da substring*/
/*strncmp compara a posicao atual de str até o comprimento da substring*/
/*substring foi encontrada na posicao i --> j=1*/
    for (i = 0; i <= (str_len - substr_len); i++) {
        if (strncmp(str + i, substr, substr_len) == 0) {
            printf("A sub string foi encontrada na posicao = %d\n", i);
            j = 1;
        }
    }

/*substring nao foi encontrada*/
    if (j == 0) {
        printf("A sub string nao foi encontrada\n");
    }

    return 0;
}
