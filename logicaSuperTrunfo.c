#include <stdio.h>
#include <string.h>

int main () {
//Declarar as variáveis da cidade 01
    char estado01;  //letra do estado
    char codigo01[5];  //código da carta
    char cidade01[50];  //nome da cidade
    unsigned long int populacao01;  //população da cidade
    float area01;  //área em Km²
    float PIB01;  //PIB da cidade
    int pontos_turisticos01;  //número de pontos turisticos
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
    scanf(" %c", &estado01);  //Espaço antes do %c para limpar o enter do buff
    printf("Digite o código da carta:");
    scanf("%s", codigo01);
    printf("Digite o nome da cidade:");
    getchar();  //limpa o enter do buff
    fgets(cidade01, 50, stdin);  //fgets lê nome composto -> stdin = origem do teclado
    // strcspn procura o caractere '\n' dentro da string e substitui por '\0', removendo o ENTER do final da string
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
    
//solicitação dos dados arta 02

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
    int opcao;

    printf("Qual atributo deseja comparar? \n");
    printf("Digite 1 para comparar o atributo População\n");
    printf("Digite 2 para comparar o atributo Área\n");
    printf("Digite 3 para comparar o atributo PIB\n");
    printf("Digite 4 para comparar o atributo Densidade populacional\n");
    printf("Digite 5 para comparar o atributo Número de pontos turísticos\n");
    scanf("%d", &opcao);


    // comparação dos dados
    switch (opcao){
        case 1:
        printf("Comparação das cartas com base no atributo População \n");
        printf("Carta 01 %s: %lu pessoas. \n", cidade01, populacao01);
        printf("Carta 02 %s: %lu pessoas. \n", cidade02, populacao02);
        printf("\n");

        if (populacao01 > populacao02){
            printf("Resultado: %s venceu com %lu pessoas. \n", cidade01, populacao01);
        } else if (populacao01 < populacao02){
            printf("Resultado: %s venceu com %lu pessoas. \n", cidade02, populacao02);
        } else {
            printf("Resultado: Empate! As duas cartas possuem uma População total de: %lu pessoas. \n", populacao01);
        }
        break;
        case 2:
        printf("Comparação das cartas com base no atributo Área \n");
        printf("Carta 01 %s: %.2f Km². \n", cidade01, area01);
        printf("Carta 02 %s: %.2f Km². \n", cidade02, area02);
        printf("\n");

        if (area01 > area02){
            printf("Resultado: %s venceu com %.2f Km². \n", cidade01, area01);
        } else if (area01 < area02){
            printf("Resultado: %s venceu com %.2f Km². \n", cidade02, area02);
        } else {
            printf("Resultado: Empate! As duas cartas possuem uma Área de %.2f Km². \n", area01);
        }
        break;
        case 3:
        printf("Comparação das cartas com base no atributo PIB \n");
        printf("Carta 01 %s: %.2f bilhões de reais. \n", cidade01, PIB01);
        printf("Carta 02 %s: %.2f bilhões de reais. \n", cidade02, PIB02);
        printf("\n");

        if (PIB01 > PIB02){
            printf("Resultado: %s venceu com %.2f bilhões de reais. \n", cidade01, PIB01);
        } else if (PIB01 < PIB02){
            printf("Resultado: %s venceu com %.2f bilhões de reais. \n", cidade02, PIB02);
        } else {
            printf("Resultado: Empate! As duas cartas possuem um PIB de %.2f bilhões de reais. \n", PIB01);
        }
        break;
        case 4:
        printf("Comparação das cartas com base no atributo Densidade populacional \n");
        printf("Carta 01 %s: %.2f Hab/Km². \n", cidade01, densidade01);
        printf("Carta 02 %s: %.2f Hab/Km². \n", cidade02, densidade02);
        printf("\n");

        if (densidade01 < densidade02){
            printf("Resultado: %s venceu com %.2f Hab/Km². \n", cidade01, densidade01);
        } else if (densidade01 > densidade02){
            printf("Resultado: %s venceu com %.2f Hab/Km². \n", cidade02, densidade02);
        } else {
            printf("Resultado: Empate! As duas cartas possuem uma densidade demográfica de %.2f Hab/Km². \n", densidade01);
        }
        break;
        case 5:
        printf("Comparação das cartas com base no atributo Número de pontos turísticos \n");
        printf("Carta 01 %s: %d pontos turísticos. \n", cidade01, pontos_turisticos01);
        printf("Carta 02 %s: %d pontos turísticos. \n", cidade02, pontos_turisticos02);
        printf("\n");

        if (pontos_turisticos01 > pontos_turisticos02){
            printf("Resultado: %s venceu com %d pontos turísticos. \n", cidade01, pontos_turisticos01);
        } else if (pontos_turisticos01 < pontos_turisticos02){
            printf("Resultado: %s venceu com %d pontos turísticos. \n", cidade02, pontos_turisticos02);
        } else {
            printf("Resultado: Empate! As duas cartas possuem %d pontos turísticos. \n", pontos_turisticos01);
        }
        break;
        default:
        printf("Opção inválida.\n");
    }


    return 0;

}