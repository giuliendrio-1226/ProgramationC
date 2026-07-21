#include <stdio.h>

//------<< {funções principais mães sendo pré-carregadas} >>------
void CadastrarPessoas();
//void GuardarInformações();
//void ImprimirAnálises();


//------<< {funções auxiliares filhas sendo pré-carregadas} >>------


//----------------------------/INT MAIN/-----------------------------
int main (){

    CadastrarPessoas();

    return 0;
}
//-------------------------------//----------------------------------



//----------------<</"FUNÇÃO MÃE CADASTRAR PESSOAS"/>>-----------------
void CadastrarPessoas(){

    //Você fez o teste pra saber se a função mãe está funcionando por enquanto. . . Está :]
    printf ("Hello, World! Could you tell me my age and my name?\n");

    int idade;
    char nome[11];

    scanf("%d %s", &idade, nome);

    printf ("\nentão a minha idade é %d e meu nome é %s?\n", idade, nome);
    printf ("interessante. . .\n");

}
//-------------------------------//----------------------------------