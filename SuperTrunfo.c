/*O código fonte abixo é a estrutura do jogo Super Trunfo de Paises
que serão representados por seus estado e suas cidades*/

#include <stdio.h>

int main(){

    char estado = 'L';
    char codigo[3] = "L01";
    char cidade[20] = "Ancre";          //declaração de vairáves para o recebimentos de dados.
    int populacao = 200000, pontos = 30;
    float area = 5000.00, pib = 6.000;

    printf("Digite uma letra de A a H para representar o Estado: \n");
    scanf("%c", &estado);

    printf("Digite a letra do Estado seguida de um número de 01 a 04 para representar o código a cidade: \n");
    scanf("%s", codigo);

    printf("Digite o nome cidade: \n");
    scanf("%s", cidade);

    printf("Digite a quantidade populacional da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km²: \n"); //para inserir o nº ² basta aterar a tecla Alt+0178
    scanf("%f", &area);

    printf("Digite o valor do PIB(Produto Intenor Bruto) a cidade: \n");
    scanf("%f", &pib);

    printf("Digite quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontos);

    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f \n", pib);
    printf("Números de Ponto Turísticos: %d \n", pontos);

    return 0;

}
