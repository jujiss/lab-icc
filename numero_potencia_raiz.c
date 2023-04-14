#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double x, y;

    scanf("%d", &n);

    x = pow(n, 10);
    y = sqrt(n);

    printf("Numero: %2d\n", n);    
    printf("         %8.2e\n", x);
    printf("         %4.2f\n", round(y*100)/100.0);
    return 0;
}


     