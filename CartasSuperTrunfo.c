#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

   //Declaração das variáveis da primeira carta
    char Estado1;
    char Codigo_da_Carta1[5];
    char Nome_da_cidade1[50];
    int População1;
    float Area1;
    float PIB1;
    int Pontos_Turisticos1;
    float Densidade_Populacional1;
    float PIB_per_Capita1;
    float Super_Poder1;


    //Declaração das variáveis da segunda carta
    char Estado2;
    char Codigo_da_Carta2[5];
    char Nome_da_cidade2[50];
    int População2;
    float Area2;
    float PIB2;
    int Pontos_Turisticos2;
    float Densidade_Populacional2;
    float PIB_per_Capita2;
    float Super_Poder2;

  // Área para entrada de dados

   //Cadastro da primeria carta

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite o Estado (A a H): ");
    scanf(" %c", &Estado1);

    printf("Digite o código da carta (ex:A01): ");
    scanf("%s",&Codigo_da_Carta1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]",&Nome_da_cidade1);//Lê o Enter

    printf("Digite a população: ");
    scanf("%d",&População1);

    printf("Digite a área (em km²): ");
    scanf("%f",&Area1);

    printf("Digite o PIB (em bilhôes de reais): ");
    scanf("%f",&PIB1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d",&Pontos_Turisticos1);

    //Cadastro da segunda carta

    printf("=== Cadastro da Carta 2 ===\n");

    printf("Digite o Estado (A a H): ");
    scanf(" %c", &Estado2);

    printf("Digite o código da carta (ex:A01): ");
    scanf("%s",&Codigo_da_Carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]",&Nome_da_cidade2);//Lê o Enter

    printf("Digite a população: ");
    scanf("%d",&População2);

    printf("Digite a área (em km²): ");
    scanf("%f",&Area2);

    printf("Digite o PIB (em bilhôes de reais): ");
    scanf("%f",&PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d",&Pontos_Turisticos2);


  // Área para exibição dos dados da cidade

   //Exibição dos dados das Cartas

    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo_da_Carta1);
    printf("Nome da Cidade: %s\n", Nome_da_cidade1);
    printf("População: %d\n", População1);
    printf("Área: %.2f km²\n",Area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de pontos Turíscos: %d\n", Pontos_Turisticos1);


    //Calculo de PIB/Densidade Carta1
    Densidade_Populacional1= (float)(População1/Area1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional1);
    PIB_per_Capita1= (float)(PIB1*1000000000)/População1;
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita1);

    //Calcular o Super poder1 
    Super_Poder1 = (float)População1 + Area1 + PIB1 + Pontos_Turisticos1 + PIB_per_Capita1 + (1.0 / Densidade_Populacional1);

    //Exibição da segunda carta

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo_da_Carta2);
    printf("Nome da Cidade: %s\n", Nome_da_cidade2);
    printf("População: %d\n", População2);
    printf("Área: %.2f km²\n",Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos Turíscos: %d\n", Pontos_Turisticos2);

    //Calculo de PIB/Densidade Carta2
    Densidade_Populacional2= (float)(População2/Area2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional2);
    PIB_per_Capita2= (float)(PIB2*1000000000)/População2;
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita2);

    //Calcular o Super poder 2
    Super_Poder2 = (float)População2 + Area2 + PIB2 + Pontos_Turisticos2 + PIB_per_Capita2 + (1.0 / Densidade_Populacional2);

     //Comparações das cartas

    printf("\n=== Comparação de Cartas ===\n");
    printf("População: Carta 1 venceu (%d)\n", População1 > População2);
    printf("Aréa: Carta 1 venceu (%d)\n", Area1 > Area2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", Pontos_Turisticos1 > Pontos_Turisticos2);
    printf("Densidade Populacional: Carta 2 venceu(%d)\n", Densidade_Populacional1 < Densidade_Populacional2);
    printf("PIB per cabita: Carta 1 venceu (%d)\n", PIB_per_Capita1 > PIB_per_Capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", Super_Poder1 > Super_Poder2);
    printf("\n====================\n");




return 0;
} 
