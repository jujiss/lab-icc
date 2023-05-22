#include<stdio.h>

/*Faça um programa em C que identifica se duas retas se cruzam e em qual eixo
elas se cruzam. O programa deve solicitar ao usuário os coeficientes a, b e c de
duas retas no formato "ax + by + c = 0". O programa deve verificar se as retas são
paralelas ou se cruzam em algum ponto. Se as retas se cruzarem, o programa deve
identificar em qual quadrante elas se cruzam*/

int main(void){
float a1, b1, c1, a2, b2, c2, x, y;
/*leitura dos coeficientes da reta 1*/
printf("Digite os coeficientes a, b e c da reta 1: ");
scanf("%f %f %f", &a1, &b1, &c1);

/*leitura dos coeficientes da reta 2*/
printf("Digite os coeficientes de a, b e c da reta 2: ");
scanf("%f %f %f", &a2, &b2, &c2);

/*r1 : a1x + b1y + c1
  r2 : a2x + b2y + c2*/

/* 0 = ax + by + c => y = -(a/b)x -(c/b)
portanto, a/b eh o coeficiente angular da reta*/

/*retas sao paralelas se possuem o mesmo coef. ang. 
ou seja, a1/b1 = a2/b2 */
if ((a1 / b1) == (a2 / b2)) {
  printf("As retas são paralelas.\n");
} 
/*se as retas forem paralelas, o programa acaba aqui.*/


/*caso as retas nao sejam paralelas, basta resolver o sistema de equacoes
envolvendo r1 e r2 para encontrar x e depois repetir o processo para y.*/

/*o x e o y encontrados representam as coordenadas do ponto em que as retas 
se encontram*/
else {
  x = (b1 * c2 - b2 * c1) / (a1 * b2 - a2 * b1);
  y = (a1 * c2 - a2 * c1) / (a2 * b1 - a1 * b2);
  printf("As retas se encontram no ponto x = %f, y = %f.\n", x, y);

/*ainda no caso em que as retas se cruzam em algum ponto, descobre-se
a qual quadrante do plano cartesiano pertence o ponto*/

/*se x e y sao positivos, primeiro quadrante*/
  if (x > 0 && y > 0) {
    printf("O ponto de encontro pertence ao primeiro quadrante.\n");
  } 
/*x positivo e y negativo, quarto quadrante*/
  else if (x > 0 && y < 0) {
    printf("O ponto de encontro pertence ao quarto quadrante.\n");
  }
/*x negativo e y positivo, segundo quadrante*/
  else if (x < 0 && y > 0) {
    printf("O ponto de encontro pertence ao segundo quadrante.\n");
  }
/*ambos negativos, terceiro quadrante*/
  else if (x < 0 && y < 0) {
    printf("O ponto de encontro pertence ao terceiro quadrante.\n");
  }
/*se x for 0, se cruzam no eixo y*/
  else if (x == 0){
    printf("As retas se cruzam no eixo y.\n");
  }
/*se y for 0, se cruzam no eixo x*/
  else if (y == 0){
    printf("As retas se cruzam no eixo 0.\n");
  }
/*se x = y = 0, se cruzam na origem*/
  else{
    printf("As retas se cruzam na origem.\n");
  }
}
    return 0;
}