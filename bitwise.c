#include<stdio.h>

int main(){

int A, B;
scanf("%d %d", &A, &B);

/* & = and*/
printf("A and B: %d\n", A & B);   
/* | = or*/  
printf("A or B: %d\n", A | B);
/* ^ = xor = ou exclusivo*/   
printf("A xor B: %d\n", A ^ B);
/* ~ = complemento*/     
printf("not A: %d\n", ~A);    
/* >> 2 = desloca à direita 2 vezes*/    
printf("A right shift 2: %d\n", A >> 2);
/* << 1 = desloca à esquerda 1 vez*/
printf("B left shift 1: %d\n", B << 1);    

return 0;
}