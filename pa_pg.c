#include<stdio.h>
#include<math.h>

int main(void){
int n, i;
float a0, an, r;
scanf("%d %f %f", &n, &a0, &r);

/*calculo da pa, an = a0 + (n-1) * r, sendo i = n-1*/
printf("PA: ");
/*laco do calculo de cada termo an*/
for(i = 0; i < n; i++){
    an = a0 + i * r;
    printf("%.3f ", an);
}
/*pula uma linha entre a pa e a pg*/
printf("\n");

/*calculo da pg, an = a0 * r ^ i, sendo i = n-1*/
printf("PG: ");
/*laco do calculo de cada termo an*/
for(i = 0; i < n; i++){
    an = a0 * pow(r, i);
    printf("%.3f ", an);
}
printf("\n");

    return 0;
}