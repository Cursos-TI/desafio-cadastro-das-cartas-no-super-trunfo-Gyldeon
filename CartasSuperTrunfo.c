#include <stdio.h>

int main (){

    char estado, estado2; //Estados
    int codigo, codigo2; //Código
    char cidade[20], cidade2[20]; // Cidades
    int habitantes, habitantes2; //Habitantes
    float area, area2; //Área
    float pib, pib2; //PIB
    int npt, npt2; //Pontos Turísticos
    float densidadepopulacional, densidadepopulacional2;
    float pibpercapita, pibpercapita2;
    
    //Mensagem de boas vindas
    printf ("\nBem-vindo ao sistema de cadastro, aqui você cadastrará suas cartas.\n");

    printf ("\nCarta 1\n");

    printf ("Insira o Estado: \n");
    scanf ("%c", &estado);

    printf ("Insira o Codigo: \n");
    scanf ("%d", &codigo);

    printf ("Insira o Nome da Cidade: \n");
    scanf (" %[^\n]", &cidade); //O (%[^\n]), faz com que possa ser usado espaço na string
    
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

    printf ("Insira o Estado: \n");
    scanf (" %c", &estado2); //é preciso dar espaço antes do %c, pra o enter do comando anterior não ser considerado como o comando atual

    printf ("Insira o Codigo: \n");
    scanf ("%d", &codigo2);

    printf ("Insira o Nome da Cidade: \n");
    scanf (" %[^\n]", &cidade2); 

    printf ("Insira o Número de Habitantes: \n");
    scanf ("%d", &habitantes2);

    printf ("Insira a Área : \n");
    scanf ("%f", &area2);

    printf ("Insira o PIB: \n");
    scanf ("%f", &pib2);

    printf ("Insira o Número de Pontos Turísticos: \n");
    scanf ("%d", &npt2);

    densidadepopulacional = (float) habitantes / area;
    pibpercapita = (float) pib / habitantes;
    densidadepopulacional2 = (float) habitantes2 / area2;
    pibpercapita2 = (float) pib2 / habitantes2;

    //Mensagem de cadastro bem sucedido 2
    printf("\nSuas cartas foram cadastradas com sucesso, aqui estão seus dados:\n");


    printf ("\nCarta 1 \n");
    printf ("\nEstado: %c\n", estado);
    printf ("Código: %c%02d\n", estado, codigo); //Para o zero à esquerda aparecer, é preciso colocar %02d para específicar 2 dígitos
    printf ("Cidade: %s\n", cidade);
    printf ("Habitantes: %d\n", habitantes);
    printf ("Área: %.2f km²\n", area);
    printf ("PIB: %.2f de reais\n", pib);
    printf ("Número de Pontos Turísticos: %d\n", npt);
    printf ("Densidade Populacional: %.2f\n", densidadepopulacional);
    printf ("PIB Percapita: %.2f\n", pibpercapita);

    printf ("\nCarta 2 \n");
    printf ("\nEstado: %c\n", estado2);
    printf ("Código: %c%02d\n", estado2, codigo2); //Para o zero à esquerda aparecer, é preciso colocar %02d para específicar 2 dígitos
    printf ("Cidade: %s\n", cidade2);
    printf ("Habitantes: %d\n", habitantes2);
    printf ("Área: %.2f km²\n", area2);
    printf ("PIB: %.2f de reais\n", pib2);
    printf ("Número de Pontos Turísticos: %d\n", npt2);
    printf ("Densidade Populacional: %.2f\n", densidadepopulacional2);
    printf ("PIB Percapita: %.2f\n", pibpercapita2);

    return 0;

}