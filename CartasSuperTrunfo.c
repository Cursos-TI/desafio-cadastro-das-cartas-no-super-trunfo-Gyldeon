#include <stdio.h>

int main (){

    char estado = 'A', estado2 = 'B'; //Estados
    char codigo[]= "01", codigo2[]= "02"; //Código
    char cidade[20], cidade2[20]; // Cidades
    int habitantes, habitantes2; //Habitantes
    float area, area2; //Área
    float pib, pib2; //PIB
    int npt, npt2; //Pontos Turísticos
    
    //Mensagem de boas vindas
    printf("\nBem-vindo ao sistema de cadastro, aqui você cadastrará suas cartas.\n");

    printf("\nCarta 1\n");

    printf ("\nInsira o Nome da Cidade: \n");
    scanf ("%s", cidade);
    
    printf ("Insira o Número de Habitantes: \n");
    scanf ("%d", &habitantes);

    printf ("Insira a Área: \n");
    scanf ("%f", &area);

    printf ("Insira o PIB: \n");
    scanf ("%f", &pib);

    printf ("Insira o Número de Pontos Turísticos: \n");
    scanf ("%d", &npt);

    //Mensagem de cadastro bem sucedido
    printf("\nA Carta 1 foi cadastrada com sucesso! Agora preencha a Carta 2.\n");


    printf ("\nCarta 2\n");

    printf ("\nInsira o Nome da Cidade: \n");
    scanf ("%s", cidade2);

    printf ("Insira o Número de Habitantes: \n");
    scanf ("%d", &habitantes2);

    printf ("Insira a Área : \n");
    scanf ("%f", &area2);

    printf ("Insira o PIB: \n");
    scanf ("%f", &pib2);

    printf ("Insira o Número de Pontos Turísticos: \n");
    scanf ("%d", &npt2);

    //Mensagem de cadastro bem sucedido 2
    printf("\nSuas cartas foram cadastradas com sucesso, aqui estão seus dados:\n");


    printf ("\nCarta 1 \n");
    printf ("\nEstado: %c\n", estado);
    printf ("Código: %c%s\n", estado, codigo);
    printf ("Cidade: %s\n", cidade);
    printf ("Habitantes: %d\n", habitantes);
    printf ("Área: %.2f km²\n", area);
    printf ("PIB: %.2f bilhões de reais\n", pib);
    printf ("Número de Pontos Turísticos: %d\n", npt);

    printf ("\nCarta 2 \n");
    printf ("\nEstado: %c\n", estado2);
    printf ("Código: %c%s\n", estado2, codigo2);
    printf ("Cidade: %s\n", cidade2);
    printf ("Habitantes: %d\n", habitantes2);
    printf ("Área: %.2f km²\n", area2);
    printf ("PIB: %2.f bilhões de reais\n", pib2);
    printf ("Número de Pontos Turísticos: %d\n", npt2);

    return 0;

}
