#include <stdio.h>
#include <string.h>
#include <stdlib.h> /*converter atoi atof*/

  typedef struct {
    char estado[50]; 
    char codigo[50]; 
    char cidade[50]; 
    char buffer[50];
    int populacao; 
    int turismo;
    float pib;
    float area;
    } carta;

int main(){
  carta carta1, carta2;

    /*Carta 1:*/
    printf("Carta 1: \n");
    printf("Escolha uma letra de A à H para representar seu estado: ");
    fgets(carta1.estado, 50, stdin);
    carta1.estado[strcspn(carta1.estado, "\n")] = 0;

    printf("Escolha um número de 01 à 04 e depois adicione a  letra que escolheu(estado) antes do número: ");
    fgets(carta1.codigo, 50, stdin);
   carta1.codigo[strcspn(carta1.codigo, "\n")] = 0;

    printf("Escolha o nome do sua cidade: ");
    fgets(carta1.cidade, 50, stdin);
    /*limpa o "\n" que fica salvo no buffer*/
    carta1.cidade[strcspn(carta1.cidade, "\n")] = 0;

    printf("Informe a população da sua cidade: ");
    fgets(carta1.buffer, 50, stdin);
    carta1.populacao = atoi(carta1.buffer);

    printf("Informe a área(km2) da sua cidade: ");
    fgets(carta1.buffer, 50, stdin);
    carta1.area = atof(carta1.buffer);

    printf("Informe o PIB da sua cidade: ");
    fgets(carta1.buffer, 50, stdin);
    carta1.pib = atof(carta1.buffer);

    printf("Informe quantos pontos turisticos há em sua cidade: ");
    fgets(carta1.buffer, 50, stdin);
    carta1.turismo = atoi(carta1.buffer);


    /*carta 2:*/
    printf("carta 2: \n");
        printf("Escolha uma letra de A à H para representar seu estado: ");
    fgets(carta2.estado, 50, stdin);
    carta2.estado[strcspn(carta2.estado, "\n")] = 0;

    printf("Escolha um número de 01 à 04 e depois adicione a  letra que escolheu(estado) antes do número: ");
    fgets(carta2.codigo, 50, stdin);
   carta2.codigo[strcspn(carta2.codigo, "\n")] = 0;

    printf("Escolha o nome do sua cidade: ");
    fgets(carta2.cidade, 50, stdin);
    /*limpa o "\n" que fica salvo no buffer*/
    carta2.cidade[strcspn(carta2.cidade, "\n")] = 0;

    printf("Informe a população da sua cidade: ");
    fgets(carta2.buffer, 50, stdin);
    carta2.populacao = atoi(carta2.buffer);

    printf("Informe a área(km2) da sua cidade: ");
    fgets(carta2.buffer, 50, stdin);
    carta2.area = atof(carta2.buffer);

    printf("Informe o PIB da sua cidade: ");
    fgets(carta2.buffer, 50, stdin);
    carta2.pib = atof(carta2.buffer);

    printf("Informe quantos pontos turisticos há em sua cidade: ");
    fgets(carta2.buffer, 50, stdin);
    carta2.turismo = atoi(carta2.buffer);

    /*Apresentação das cartas*/
    
    /*Carta1:*/
    printf("\n Carta1: \n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de pontos turísticos: %d\n", carta1.turismo);

    /*Carta2:*/
    printf("\n Carta2: \n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de pontos turísticos: %d\n", carta2.turismo);
    return 0;
}
