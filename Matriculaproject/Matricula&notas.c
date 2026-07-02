#include <stdio.h>
#include <string.h>

//funções mãe principais do código sendo pré carregadas
void CadastrarPessoas();
void GuardarInformações();
void ImprimirAnálises();


int main(){

    CadastrarPessoas();
    GuardarInformações();
    ImprimirAnálises();

    return 0;
}

//funções filhas que vão ajudar o código de "CadastrarPessoas" :)

void CadastrarNome(){

    char nome[100];

    printf ("Para prosserguirmos, preencha com o nome do aluno: ");
    fgets (nome, sizeof(nome), stdin);

}

void CadastrarCPF(){

    char CPF[12];
    
    printf ("Para começar, favor inserir o CPF do aluno: ");
    scanf ("%s", CPF);


}


void CadastrarPessoas(){

    int idade;

    CadastrarCPF();
    Cadastrarnome();

    printf ("nome cadastrado com sucesso! Para continuar insira a idade do aluno: ");
    scanf ("%d", &idade);


}