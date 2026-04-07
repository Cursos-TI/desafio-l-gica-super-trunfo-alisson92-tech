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

    //Escolha de atributos
    int opcao1, opcao2;

    printf("Escolha o Primeiro atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade populacional\n");
    printf("5 - Pontos turísticos\n");
    scanf("%d", &opcao1);

// menu dinâmico
    printf("Escolha o segundo atributo:\n");

//Percorrer todas as alternativas e esconder a já escolhida
    for (int i = 1; i <= 5; i++) {
        if (i != opcao1) {
            switch(i){
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Densidade populacional\n"); break;
                case 5: printf("5 - Pontos turísticos\n"); break;
            }
        }
    }

    scanf("%d", &opcao2);

// validação
    if (opcao1 == opcao2) {
        printf("Erro: não pode repetir atributo.\n");
        return 0;
    }

//Variaveis para os atributos
    float vl1_at1, vl2_at1;
    float vl1_at2, vl2_at2;

// atributo 1
    switch(opcao1){
        case 1:
            vl1_at1 = populacao01;
            vl2_at1 = populacao02;
            break;
        case 2:
            vl1_at1 = area01;
            vl2_at1 = area02;
            break;
        case 3:
            vl1_at1 = PIB01;
            vl2_at1 = PIB02;
            break;
        case 4:
            vl1_at1 = inverso01;
            vl2_at1 = inverso02;
            break;
        case 5:
            vl1_at1 = pontos_turisticos01;
            vl2_at1 = pontos_turisticos02;
            break;
    }

// atributo 2
    switch(opcao2){
        case 1:
            vl1_at2 = populacao01;
            vl2_at2 = populacao02;
            break;
        case 2:
            vl1_at2 = area01;
            vl2_at2 = area02;
            break;
        case 3:
            vl1_at2 = PIB01;
            vl2_at2 = PIB02;
            break;
        case 4:
            vl1_at2 = inverso01;
            vl2_at2 = inverso02;
            break;
        case 5:
            vl1_at2 = pontos_turisticos01;
            vl2_at2 = pontos_turisticos02;
            break;
    }


//Comparação individual de atributos

    int resultado1 = (vl1_at1 > vl2_at1) ? 1 :
                     (vl1_at1 < vl2_at1) ? 2 : 0;

    int resultado2 = (vl1_at2 > vl2_at2) ? 1 :
                     (vl1_at2 < vl2_at2) ? 2 : 0;

// soma dos atributos
    float soma1 = vl1_at1 + vl1_at2;
    float soma2 = vl2_at1 + vl2_at2;

// resultado final
    int vencedor = (soma1 > soma2) ? 1 :
                   (soma2 > soma1) ? 2 : 0;


    printf("--- Resultado ---\n");

    printf("%s: %.2f\n", cidade01, soma1);
    printf("%s: %.2f\n", cidade02, soma2);

    printf("Vencedor: %s\n",
        (vencedor == 1) ? cidade01 :
        (vencedor == 2) ? cidade02 : "Empate!");

    return 0;
}