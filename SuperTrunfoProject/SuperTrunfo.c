#include <stdio.h>

    int main(){

        printf ("Olá! Seja bem vindo ao jogo SuperTrunfo!\n" 
            "Para começarmos sua primeira carta, insira uma letra de estado de 'A' a 'H': ");
        //o contra-barra + "n" foi utilizado para fins de formatação durante o uso do terminal, seu propósito é somente pular 1 linha.

        char estado1;
        scanf (" %c", &estado1);
        printf ("\nLetra de estado cadastrada!\n" 
            "Agora vamos prosseguir preenchendo o seu código da carta de 01 a 04: ");

        int código1;
        scanf ("%d", &código1);
        printf ("\nSeu código foi cadastrado com sucesso!\n" 
            "Para continuarmos, favor preencher com o nome da cidade: ");

        char cidade1[22];
        scanf ("%s", cidade1);
        printf ("\nNome da cidade cadastrado!\n"
            "Na etapa a seguir, preencha com o número de habitantes da cidade: ");

        int habitantes1;
        scanf("%d", &habitantes1);
        printf ("\nNúmero de habitantes, salvo com sucesso!\n"
            "Para prosseguirmos, insira a área da cidade em Km²: ");

        float área1;
        scanf ("%f", &área1);
        printf ("\nValor da área indexado com sucesso!\n"
            "Para irmos adiante, favor preencher com o valor do PIB: ");

        float pib1;
        scanf ("%f", &pib1);
        printf ("\nValor do PIB cadastrado!\n" 
            "Para finalizarmos sua primeira carta, por fim, insira o número de pontos turísticos: ");

        int pontos_turísticos1;
        scanf ("%d", &pontos_turísticos1);
        printf ("\nPrimeira carta cadastrada com sucesso, gostaria de vê-la agora? Se tiver vontade digite 'S':\n ");

        //esse código a seguir serve para o usuário decidir se vai ver como está a primeira carta ou não

        char escolha;
        scanf (" %c", &escolha);

        if (escolha == 's'|| escolha == 'S'){
        //esse "if" serve pra funcionar como se fosse um desvio opcional do código pelo usuário
        //As barras duplas retas "||" servem como se fosse um "ou/or" nas proposições lógicas, ela permite que tanto o s minúsculo quanto o maiúsculo funcionem para a escolha
            printf ("\nCarta 1:\n"
            "Estado: %c\n"
            "Código da carta: %c%02d\n"
            "Nome da cidade: %s\n"
            "População: %d\n"
            "Área (em Km²): %.3f\n"
            "PIB: %.2f\n"
            "Número de pontos turísticos: %d\n",
            
            estado1, 
            estado1, 
            código1, 
            cidade1, 
            habitantes1, 
            área1, 
            pib1, 
            pontos_turísticos1);
            }

        printf("\nPerfeito, então vamos continuar e criar sua 2ª carta de SuperTrunfo?!\n"
            "Para começarmos sua 2ª carta, insira uma letra de estado de 'A' a 'H': ");
        
        char estado2;
        scanf (" %c", &estado2);
        printf ("\nLetra de estado cadastrada!\n" 
            "Agora vamos prosseguir preenchendo o seu código da carta de 01 a 04: ");

        int código2;
        scanf ("%d", &código2);
        printf ("\nSeu código foi cadastrado com sucesso!\n" 
            "Para continuarmos, favor preencher com o nome da cidade: ");

        char cidade2[22];
        scanf ("%s", cidade2);
        printf ("\nNome da cidade cadastrado!\n"
            "Na etapa a seguir, preencha com o número de habitantes da cidade: ");

        int habitantes2;
        scanf("%d", &habitantes2);
        printf ("\nNúmero de habitantes, salvo com sucesso!\n"
            "Para prosseguirmos, insira a área da cidade em Km²: ");

        float área2;
        scanf ("%f", &área2);
        printf ("\nValor da área indexado com sucesso!\n"
            "Para irmos adiante, favor preencher com o valor do PIB: ");

        float pib2;
        scanf ("%f", &pib2);
        printf ("\nValor do PIB cadastrado!\n" 
            "Para finalizarmos sua primeira carta, por fim, insira o número de pontos turísticos: ");

        int pontos_turísticos2;
        scanf ("%d", &pontos_turísticos2);
        printf ("\nPerfeito! Segunda carta cadastrada com sucesso! Aqui estão as suas duas cartas em sequênica! :D\n"
        "\nCarta 1:\n"
            "Estado: %c\n"
            "Código da carta: %c%02d\n"
            "Nome da cidade: %s\n"
            "População: %d\n"
            "Área (em Km²): %.3f\n"
            "PIB: %.2f\n"
            "Número de pontos turísticos: %d\n",
            
            estado1, 
            estado1, 
            código1, 
            cidade1, 
            habitantes1, 
            área1, 
            pib1, 
            pontos_turísticos1);

        printf ("\nCarta 2:\n"
            "Estado: %c\n"
            "Código da carta: %c%02d\n"
            "Nome da cidade: %s\n"
            "População: %d\n"
            "Área (em Km²): %.3f\n"
            "PIB: %.2f\n"
            "Número de pontos turísticos: %d\n",
            
            estado2, 
            estado2, 
            código2, 
            cidade2, 
            habitantes2, 
            área2, 
            pib2, 
            pontos_turísticos2);

        return 0;
    }