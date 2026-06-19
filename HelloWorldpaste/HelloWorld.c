#include <stdio.h>

int main(){

    printf ("Hello, World! Could you tell me my age and my name?\n");

    int idade;
    char nome[11];

    scanf("%d %s", &idade, nome);

    printf ("então a minha idade é %d e meu nome é %s?\n", idade, nome);
    printf ("interessante. . .\n");

    return 0;
}