#include <stdio.h>

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

    cadastrar_pessoas();

    return 0;
}
//-------------------------------//----------------------------------



//------------------------/CADASTRAR NOME/---------------------------
void cadastrar_nome(struct Aluno *aluno){

    printf ("\nDigite o nome do aluno: \n");
    scanf ("%s", aluno ->nome);
    
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

    printf ("\nNome do aluno: %s", aluno ->nome);
    printf ("\nIdade do aluno: %d", aluno ->idade);
    printf ("\nO CPF do aluno é: %s\n", aluno ->CPF);
    
}
//-------------------------------//----------------------------------






//----------------<</"FUNÇÃO MÃE CADASTRAR PESSOAS"/>>-----------------
void cadastrar_pessoas(){

    //Você fez o teste pra saber se a função mãe está funcionando por enquanto. . . Está :]
    struct Aluno aluno;

    cadastrar_nome(&aluno);
    cadastrar_idade(&aluno);
    cadastrar_CPF(&aluno);
    imprimir_teste(&aluno);
}
//-------------------------------//----------------------------------