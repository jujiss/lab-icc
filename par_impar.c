#include <stdio.h>
#include <string.h>

int main() {
    char nome1[10], nome2[10];
    int n1, n, i, n12, n2, r;
/*leitura dos nomes*/
    scanf("%s %s", nome1, nome2);
/*leitura do numero escolhido pelo primeiro jogador (0 = par e 1 = impar)*/
    scanf("%d", &n1);
/*leitura da quantidade de jogos escolhida*/
    scanf("%d", &n);

/*laco do jogo; le os numeros que os jogadores escolheram para a partida*/
    for (i = 1; i <= n; i++){
        scanf("%d", &n12);
        scanf("%d", &n2);
        r = n12 + n2;
        
/*se os dois numeros escolhidos foram 0, a partida eh refeita*/
        if ((n12 == 0 && n2 == 0)) {
            printf("Refazendo a rodada\n");
            i--;
        }
/*se o resultado da soma dos dois numeros foi par e o primeiro jogador escolheu 0, ele vence
se o resultado da soma dos dois numeros foi impar e o primeiro jogador escolheu 1, ele vence*/
        else if ((r % 2 == 0 && n1 == 0) || (r % 2 != 0 && n1 == 1)) {
            printf("%s venceu!\n", nome1);
        } 
/*senao, o segundo jogador vence*/
        else{
            printf("%s venceu!\n", nome2);
        }
    } 
        
    return 0;
}
