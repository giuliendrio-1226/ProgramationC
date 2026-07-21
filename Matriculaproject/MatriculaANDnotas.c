#include <stdio.h>
#include <string.h>

//funções mãe principais do código sendo pré carregadas
void CadastrarPessoas();
//void GuardarInformações();
//void ImprimirAnálises();


//fuções filhas do código sendo pré carregadas
//----------------------------///-----------------------------
void CadastrarNome(char nome[]);
void CadastrarCPF(char CPF[]);
//----------------------------///-----------------------------



//----------------------------/INT MAIN/-----------------------------

int main(){

    CadastrarPessoas();
    //GuardarInformações();
    //ImprimirAnálises();

    return 0;
}

//funções filhas que vão ajudar o código de "CadastrarPessoas" :)
//---------------------------///------------------------------

void CadastrarNome(char nome[]){

    getchar();//remove o Enter que fica no teclado se digitarem algo antes dele, assim permitindo que a função nome não seja pulada

    printf ("\nPara prosserguirmos, preencha com o nome do aluno: ");
    fgets (nome, 100, stdin);

}

void CadastrarCPF(char CPF[]){
    
    printf ("\nPara começar, favor inserir o CPF do aluno: ");
    scanf ("%11s", CPF);


}
//---------------------------///------------------------------

void CadastrarPessoas(){

    int idade;
    char CPF[12];
    char nome[100];


    CadastrarCPF(CPF);
    CadastrarNome(nome);

    printf ("\nnome cadastrado com sucesso! Para continuar insira a idade do aluno: ");
    scanf ("%d", &idade);

    printf ("\nTodas as informaçãos essenciais, foram preenchidas com êxito! Deseja confirmar a criação desta matrícula?\n"
        "(Se tiver vontade digite 'S', caso escolha cancelar digite 'N')\n ");

        char escolha;
        scanf (" %c", &escolha);

        if (escolha == 's'|| escolha == 'S'){
        //esse "if" serve pra funcionar como se fosse um desvio opcional do código pelo usuário
        //As barras duplas retas "||" servem como se fosse um "ou/or" nas proposições lógicas, ela permite que tanto o s minúsculo quanto o maiúsculo funcionem para a escolha
            printf ("\n Matrícula:\n"
            "CPF: %s\n"
            "Nome: %s\n"
            "Idade: %d \n"
            "Seu número de Matrícula é: %d \n",
        
            CPF,
            nome,
            idade,
            idade);
        } 
        else if (escolha == 'n'|| escolha == 'N'){
        //Caso escolha não prosseguir e fechar o programa
            printf ("\nOk, cancelando matrícula. . .\n"
            "Se você mudar de ideia, apenas inicie o programa novamente e preencha com as informações ;]");

            return;
        }
        else {
        //Este "Else" vazio serve como opção de segurança, caso o usuário digite algo errado
            printf ("Ops! opção inválida kkkk (^^;)\n"
            "Me parece que houve um erro de digitação ou equívoco, tente novamente: ");
        }

    }

