#include<stdio.h>

#define MAX 3

/*funcao que calcula o determinante de uma matriz mat de tamanho N <= 3*/
int determinante(int N, int mat[MAX][MAX]){
    int d = 0;

/*quando a matriz tem tamanho 1, seu determiinante eh o proprio termo*/
    if(N == 1){
        return mat[0][0];
    }
/*se tem tamanho 2, seu det eh a subtracao entre a diagonal principal e a secundaria*/
    else if(N == 2){
        return ((mat[0][0] * mat[1][1]) - (mat[1][0] * mat[0][1]));
    }
    else{
/*se tem tamanho 3, Regra de Sarrus*/
        d = (mat[0][0] * mat[1][1] * mat[2][2]) +
              (mat[0][1] * mat[1][2] * mat[2][0]) +
              (mat[0][2] * mat[1][0] * mat[2][1]) -
              (mat[0][2] * mat[1][1] * mat[2][0]) -
              (mat[0][0] * mat[1][2] * mat[2][1]) -
              (mat[0][1] * mat[1][0] * mat[2][2]);
    }
    return d;
}

int main(void){
    int N;
    int mat[MAX][MAX];
    scanf("%d", &N);
  
/*preenche a matriz ate N*/
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
/*calcula e imprime o determinante*/
    int det = determinante(N, mat);
    printf("%d\n", det);
    
    return 0;
}
