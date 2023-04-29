#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);

/*considerando caracteres de a até z, maiúsculos ou minúsculos*/
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) 
    {

    /*se char escolhido for igual à a, e, i, o , u (maiusculos ou minusculos), vogal*/
        if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' ||
            c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') 
            {
            printf("Eh uma vogal\n");
            } 

    /*senão, consoante*/
        else 
        {
            printf("Eh uma consoante\n");
        }

/*se o char escolhido nao for de a ate z, nao faz parte do alfabeto*/
    } else 
    {
        printf("Nao eh uma letra do alfabeto\n");
    }

    return 0;
}


