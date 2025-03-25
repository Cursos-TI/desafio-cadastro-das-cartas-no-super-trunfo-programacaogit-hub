/*O código fonte abixo é a estrutura do jogo Super Trunfo de Paises
que serão representados por seus estado e suas cidades*/

#include <stdio.h>

int main(){

    //declaração de vairáves para o recebimentos de dados.
    char estado1 = 'L';
    char codigo1[3] = "L01";
    char cidade1[20] = "Ancre";          
    int populacao1 = 200000, pontos1 = 30;
    float area1 = 5000.00, pib1 = 6.000;

    char estado2;
    char codigo2[3];
    char cidade2[20];          
    int populacao2, pontos2;
    float area2, pib2;

    //Entrada de dados.
    printf("Digite uma letra de A a H para representar o Estado: \n");
    scanf("%c", &estado1);

    printf("Digite a letra do Estado seguida de um número de 01 a 04 para representar o código a cidade: \n");
    scanf("%s", codigo1);

    printf("Digite o nome cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a quantidade populacional da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em km²: \n"); //para inserir o nº ² basta aterar a tecla Alt+0178
    scanf("%f", &area1);

    printf("Digite o valor do PIB(Produto Intenor Bruto) a cidade: \n");
    scanf("%f", &pib1);

    printf("Digite quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontos1);

    printf("Digite uma letra de A a H para representar o Estado: \n");
    scanf("%c", &estado2);

    printf("Digite a letra do Estado seguida de um número de 01 a 04 para representar o código a cidade: \n");
    scanf("%s", codigo2);

    printf("Digite o nome cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a quantidade populacional da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em km²: \n"); //para inserir o nº ² basta aterar a tecla Alt+0178
    scanf("%f", &area2);

    printf("Digite o valor do PIB(Produto Intenor Bruto) a cidade: \n");
    scanf("%f", &pib2);

    printf("Digite quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontos2);

    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Números de Ponto Turísticos: %d \n", pontos1);

    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Números de Ponto Turísticos: %d \n", pontos2);

    return 0;

}
