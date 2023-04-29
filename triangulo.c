#include <stdio.h>

int main(void){
int a, b, c;
scanf("%d %d %d", &a, &b, &c);

/*codições base para que um triângulo exista não são cumpridas
(um dos lados é maior do que a soma dos outros dois)*/
if (a + b <= c || a + c <= b || b + c <= a){
    printf("INVALIDO");
}

/*se as condiçoes dentro do parenteses acima nao forem cumpridas, entao o triangulo existe*/

/*tres lados iguais (a=b e b=c)*/
else if ((a == b) && (b == c)){
        printf("EQUILATERO\n");
}

/*dois lados iguais (a=b ou b=c ou a=c)*/
else if ((a == b || a == c || b == c)){
        printf("ISOSCELES\n");
}

/*os tres lados sao diferentes*/
else{
        printf("ESCALENO\n");
}

return 0;
}