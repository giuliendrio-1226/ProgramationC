#include <stdio.h>

int main(){
    int idade, matrícula;
    float altura;
    char nome[32];

    printf ("digite sua idade: ");
    scanf ("%d", &idade);

    printf ("idade cadastrada, agora favor insira sua altura: ");
    scanf ("%f", &altura);

    printf ("altura cadastrada, agora favor inserir seu nome: ");
    scanf ("%s", nome);

    printf ("nome cadastrado, sua matrícula é: 12260703\n" 
        "por favor escreva sua matrícula para confirmar sua inscrição: ");
    scanf ("%d", &matrícula);

    printf ("\nCadastro concluído com sucesso!\n" 
    "O nome do aluno é %s e sua matrícula é: %d\n", nome, matrícula);
    printf ("A idade do aluno é %d enquanto sua altura em metros é %.2f\n", idade, altura);

    return 0;
}