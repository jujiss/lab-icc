#include <stdio.h>

int main(){

    int x;
    char c;

scanf("%d %c", &x, &c);

printf("Inteiro lido: %d\n", x);
printf("Codigo hexadecimal: %x\n", x);
printf("Caractere ASCII: %c\n\n", x);

printf("Inteiro lido: %d\n", c);
printf("Codigo hexadecimal: %x\n", c);
printf("Caractere ASCII: %c\n", c);

return 0;

}