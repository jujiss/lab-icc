#include <stdio.h>
#include <ctype.h>

/*maximo de caracteres na palavra*/
#define MAX 100

int main(void){
    char palavra[MAX];
    int j = 0;
    scanf("%s", palavra);

/*laco para identificar vogais na palavra, sendo elas maiusculas ou minusculas*/
    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || 
        palavra[i] == 'u') {
            j++;
        }
        else if (palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || 
        palavra[i] == 'U'){
            j++;
        }
    }
    
/*casos para as diferentes impressoes das vogais identificadas*/
    if (j > 1){
        printf("A palavra \"%s\" contem %d vogais.\n", palavra, j);
    }
    else if (j == 1){
        printf("A palavra \"%s\" contem 1 vogal.\n", palavra);
    }
    else{
        printf("A palavra \"%s\" nao contem vogais.\n", palavra);

    }
    
    return 0;
}
