#include <stdio.h>
#include <string.h>

int main () {
//Declarar as variáveis da cidade 01
    char estado01;  
    char codigo01[5];  
    char cidade01[50];  
    unsigned long int populacao01;  
    float area01;  
    float PIB01;  
    int pontos_turisticos01;  
    float densidade01;
    float PIBpc01;
    float inverso01;
    float spoder01;

//declarar variaveis da cidade 02

    char estado02; 
    char codigo02[5]; 
    char cidade02[50];  
    unsigned long int populacao02;  
    float area02;  
    float PIB02; 
    int pontos_turisticos02;
    float densidade02;
    float PIBpc02;
    float inverso02;
    float spoder02;


//solicitação dos dados carta 01

    printf("Digite a letra do estado:");
    scanf(" %c", &estado01);  
    printf("Digite o código da carta:");
    scanf("%s", codigo01);

    printf("Digite o nome da cidade:");
    getchar();  
    fgets(cidade01, 50, stdin);  
    cidade01[strcspn(cidade01, "\n")] = '\0';  

    printf("Digite o número de habitantes:");
    scanf("%lu", &populacao01);
    printf("Digite a área em Km²:");
    scanf("%f", &area01);
    printf("Digite o PIB:");
    scanf("%f", &PIB01);
    printf("Digite o número de pontos turísticos:");
    scanf("%d", &pontos_turisticos01);

    // calculo de densidade demográfica e PIB per capta
    densidade01 = populacao01 / area01;
    PIBpc01 = (PIB01 / populacao01) * 1000000000; // *1000000000 para converter de bilhão para unitário

    // Calculo densidade inversa
    inverso01 = 1.0 / densidade01;

    // Super poder
    spoder01 = populacao01 + area01 + PIB01 + pontos_turisticos01 + PIBpc01 + inverso01;

    printf("\n");
    
//solicitação dos dados carta 02

    printf("Digite a letra do estado:");
    scanf(" %c", &estado02);  
    printf("Digite o código da carta:");
    scanf("%s", codigo02);

    printf("Digite o nome da cidade:");
    getchar(); 
    fgets(cidade02, 50, stdin);  
    cidade02[strcspn(cidade02, "\n")] = '\0'; 
     
    printf("Digite o número de habitantes:");
    scanf("%lu", &populacao02);
    printf("Digite a área em Km²:");
    scanf("%f", &area02);
    printf("Digite o PIB:");
    scanf("%f", &PIB02);
    printf("Digite o número de pontos turísticos:");
    scanf("%d", &pontos_turisticos02);

    densidade02 = populacao02 / area02;
    PIBpc02 = (PIB02 / populacao02) * 1000000000;

      // Calculo densidade inversa
    inverso02 = 1.0 / densidade02;

    // Super poder
    spoder02 = populacao02 + area02 + PIB02 + pontos_turisticos02 + PIBpc02 + inverso02;

    printf("\n");

    int resultado;  // declarando a variavél resultado

  //Visualisação dos dados

    printf("Informações da carta 01 \n");
    printf("Estado: %c \n", estado01);
    printf("Código: %s \n", codigo01);
    printf("Nome da cidade: %s \n", cidade01);
    printf("População: %lu \n", populacao01);
    printf("Área: %.2f Km² \n", area01);  // %.2f define apenas duas casas após a virgula
    printf("PIB: %.2f bilhões de reais \n", PIB01);
    printf("Número de pontos turísticos: %d \n", pontos_turisticos01);
    printf("Densidade populacional: %.2f hab/Km² \n", densidade01);
    printf("PIB per Capta: %.2f reais \n", PIBpc01);
    printf("Super poder: %.2f \n", spoder01);


    printf("\n");
    printf("\n");

    printf("Informações da carta 02 \n");
    printf("Estado: %c \n", estado02);
    printf("Código: %s \n", codigo02);
    printf("Nome da cidade: %s \n", cidade02);
    printf("População: %lu \n", populacao02);
    printf("Área: %.2f Km² \n", area02);
    printf("PIB: %.2f bilhões de reais \n", PIB02);
    printf("Número de pontos turísticos: %d \n", pontos_turisticos02);
    printf("Densidade populacional: %.2f hab/Km² \n", densidade02);
    printf("PIB per Capta: %.2f reais \n", PIBpc02);
    printf("Super poder: %.2f \n", spoder02);

    printf("\n");

    // comparação dos dados
    printf("Comparação das cartas com base no PIB \n");
    printf("A cidade: %s tem um PIB de: %.2f bilhões de reais. \n", cidade01, PIB01);
    printf("A cidade: %s tem um PIB de: %.2f bilhões de reais. \n", cidade02, PIB02);
    printf("\n");

        if (PIB01 > PIB02){
            printf("Resultado: A cidade: %s venceu, com PIB de: %.2f bilhões de reais \n", cidade01, PIB01);
        } else if (PIB01 < PIB02){
            printf("Resultado: A cidade: %s venceu, com PIB de: %.2f bilhões de reais \n", cidade02, PIB02);
        } else {
            printf("Resultado: Empate! As duas cidades possuem um PIB de: %.2f bilhões de reais \n", PIB01);
        }


    return 0;

}