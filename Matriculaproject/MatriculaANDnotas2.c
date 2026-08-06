#include <stdio.h>
#include <string.h>

//serve tipo pra montar a ficha do aluno e unir as variáveis... tô entendendo como funciona ainda kkkkkk
struct Aluno{
    char nome[100];
    int idade;
    char CPF[15];
};

//------<< {funções principais mães sendo pré-carregadas} >>------
void cadastrar_pessoas();
//void guardar_informações();
//void imprimir_análises();


//------<< {funções auxiliares filhas sendo pré-carregadas} >>------
void cadastrar_nome(struct Aluno *aluno);
void cadastrar_idade(struct Aluno *aluno);
void cadastrar_CPF(struct Aluno *aluno);
void imprimir_teste(struct Aluno *aluno);


//----------------------------/INT MAIN/-----------------------------
int main (){

    int escolha;

    printf ("\nOláa, seja bem vindo ao Sistema de Matrícula e Notas 2.0!!!\n"
    "Para começarmos escolha uma das opções a seguir: (digite somente o número da opção)\n"
    "Opção [1]: Cadastro de pessoas\n"
    "Opção [2]: Cadastro de notas e presença\n"
    "Opção [3]: Análise de desempenho\n\n"
    " Insira sua opção escolhida: ");
    scanf ("%d", &escolha);

    //Switch é tipo como se fosse um IF, só que mais organizado, ele funciona muito bem como interface inicial (que é o caso)!
    switch (escolha){
    case 1:
        cadastrar_pessoas();
     break;
    //case 2:
    //    guardar_informações();
    // break;
    //case 3:
    //    imprimir_análises();
    // break;
     default:
        printf ("\nopção inválida!");
     break;
    }
    return 0;
}
//-------------------------------//----------------------------------



//------------------------/CADASTRAR NOME/---------------------------
void cadastrar_nome(struct Aluno *aluno){

    printf ("\nDigite o nome completo do aluno: \n");
     //scanf ("%s", aluno ->nome);

    int c;
        while ((c = getchar()) != '\n' && c != EOF);
        fgets(aluno->nome, sizeof (aluno->nome), stdin);
        aluno->nome[strcspn(aluno->nome, "\n")] = '\0';    
}
//-------------------------------//----------------------------------
//------------------------/CADASTRAR IDADE/--------------------------
void cadastrar_idade(struct Aluno *aluno){

    printf ("\nDigite a idade do aluno: \n");
    scanf ("%d", &aluno ->idade);
    
}
//-------------------------------//----------------------------------
//------------------------/CADASTRAR CPF/--------------------------
void cadastrar_CPF(struct Aluno *aluno){

    printf ("\nDigite o C.P.F do aluno: \n");
    scanf ("%s", aluno ->CPF);
    
}
//-------------------------------//----------------------------------
//------------------------/IMPRIMIR TESTE/--------------------------
void imprimir_teste(struct Aluno *aluno){

    printf ("\n\n-------<<Informações até o momento>>-------\n");
    printf ("\nNome do aluno: %s", aluno ->nome);
    printf ("\nIdade do aluno: %d", aluno ->idade);
    printf ("\nO CPF do aluno é: %s\n", aluno ->CPF);
    
}
//-------------------------------//----------------------------------






//----------------<</"FUNÇÃO MÃE CADASTRAR PESSOAS"/>>-----------------
void cadastrar_pessoas(){

    //Você fez o teste pra saber se a função mãe está funcionando por enquanto. . . Está :]
    struct Aluno aluno;
    char escolha[100];

    cadastrar_nome(&aluno);
    cadastrar_idade(&aluno);
    cadastrar_CPF(&aluno);

    printf ("\n\n\nCadastro de aluno quase concluído, tem certeza que todas as informações estão corretas?");
    imprimir_teste(&aluno);
    printf ("\ndeseja confirmar o Cadastro e gerar o número de matrícula do aluno?\n"
        "Digite 'S/Sim' para [SIM] e 'N/Não' para [NÃO]: " );

        //Serve para limpar o Buffer dos lixos/caracteres que o scanf ignora durante sua leitura e assim não travar o fgets com o que está para ser lido na fila ainda
        int c;
        while ((c = getchar()) != '\n' && c != EOF);

        //Aqui o fgets entende e lê a linha inteira no lugar do scanf de modo que ele não repete em looping quando a resposta é mais de uma letra
        fgets(escolha, sizeof (escolha), stdin);
        //Como o fgets detecta a frase inteira incluindo o enter, então decidi usar essa função pra remover o código da tecla enter
        escolha[strcspn(escolha, "\n")] = '\0';

    while (1) {
    //Esse 'While' serve pra repetir as escolhas até sair uma resposta válida sendo interrompida pelo break

        // esse strcmp significa 'string compare' e é necessário, pois não estamos lidando mais com a entrada de caracteres alheios e sim um vetor de array
        if ( strcmp (escolha, "s") == 0 || strcmp (escolha, "S") == 0 || 
            strcmp (escolha, "Sim") == 0 || strcmp (escolha, "SIM") == 0 || strcmp (escolha, "sim") == 0 ){
        //esse "if" serve pra funcionar como se fosse um desvio opcional do código pelo usuário
        //As barras duplas retas "||" servem como se fosse um "ou/or" nas proposições lógicas, ela permite que tanto o s minúsculo quanto o maiúsculo funcionem para a escolha
            //gerar_matricula
            imprimir_teste(&aluno);
            break;
        }
        else if (strcmp (escolha, "n") == 0 || strcmp (escolha, "N") == 0 || 
                strcmp (escolha, "Não") == 0 || strcmp (escolha, "NÃO") == 0 || strcmp (escolha, "não") == 0 ||
                strcmp (escolha, "Nao") == 0 || strcmp (escolha, "NAO") == 0 || strcmp (escolha, "nao") == 0){

            printf ("\nOK, Cadastro de aluno cancelado!\n" 
                "Caso decida, sinta-se a vontade para tentar cadastrar o aluno novamente! ;]\n\n" );
            return;
        }
    
        //caso ocorra uma resposta inválida aparecerá essa mensagem de aviso e rodará o looping novamente
        printf ("\n\nOps! opção inválida kkkk (^^;)\n"
            "Me parece que houve um erro de digitação ou equívoco, tente novamente: ");
            fgets(escolha, sizeof (escolha), stdin);
            escolha[strcspn(escolha, "\n")] = '\0';

        
    }

}
//-------------------------------//----------------------------------