#include <stdio.h>

int main(){

int y, m, d;
  scanf("%*[^0-9]%3x%2d%2o", &y, &m, &d);
  printf("Data: %02d/%02d/%04d\n", d, m, y);

return 0;

}