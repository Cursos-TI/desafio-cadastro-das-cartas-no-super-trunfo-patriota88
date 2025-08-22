#include <stdio.h>
#include <string.h>

/*
- Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. 
  Para cada carta, o usuário deverá fornecer as seguintes informações:

1) Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
2) Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
3) Nome da Cidade: O nome da cidade. Tipo: char[] (string)
4) População: O número de habitantes da cidade. Tipo: int
5) Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
6) PIB: O Produto Interno Bruto da cidade. Tipo: float
7) Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int

- Após o usuário inserir os dados de cada carta, seu programa deve exibir na tela as informações cadastradas, 
  de forma organizada e legível. Para cada carta, imprima cada informação em uma linha separada,

  
*/

// 1) Definiçao da struct para a carta. Melhor forama para agrupar todas as informçoes de uma unica carta
struct Carta
{
    char estado;
    char codigo[5]; //Ex: A01, A02, etc.
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;   
};

//Funçao para limpar o buffer de entrada
//Foi utilizada esta funçao, pois alguns valores nao estavam sendo digitados quando executado, devido a um problemca de quebra de linha no scanf
void limpar_buffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {

    }
}

int main(){
// Declarar as variaveis
    struct Carta carta1, carta2; 

// Coletar dados da primeira carta
    printf("--- CADASTRO DA PRIMEIRA CARTA ---\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &carta1.estado);
    
    printf("Digite o código da carta (ex: A01): ");
    limpar_buffer();
    scanf("%s", &carta1.codigo);

// foi utilizado o fgets para leitura do nome das cidades, pois haveria cidades com espeço e o scanf nao faz a leitura da linha toda.
    printf("Digite o nome da cidade: ");
    limpar_buffer();
    fgets(carta1.nome_cidade, 50, stdin);
    carta1.nome_cidade[strcspn(carta1.nome_cidade, "\n")] = 0;

    printf("Digite a populaçao: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a area: ");
    limpar_buffer();
    scanf("%f", &carta1.area);

    printf("Digite o PIB: ");
    limpar_buffer();
    scanf("%f", &carta1.pib);

    printf("Digite a quantidade de pontos turisticos: ");
    limpar_buffer();
    scanf("%d", &carta1.pontos_turisticos);

// Coletar dados da segunda carta   
    printf("--- CADASTRO DA SEGUNDA CARTA ---\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &carta2.estado);
    
    printf("Digite o código da carta (ex: A01): ");
    limpar_buffer();
    scanf("%s", &carta2.codigo);

// foi utilizado o fgets para leitura do nome das cidades, pois haveria cidades com espeço e o scanf nao faz a leitura da linha toda.
    printf("Digite o nome da cidade: ");
    limpar_buffer();
    fgets(carta2.nome_cidade, 50, stdin);
    carta1.nome_cidade[strcspn(carta2.nome_cidade, "\n")] = 0;

    printf("Digite a populaçao: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a area: ");
    limpar_buffer();
    scanf("%f", &carta2.area);

    printf("Digite o PIB: ");
    limpar_buffer();
    scanf("%f", &carta2.pib);

    printf("Digite a quantidade de pontos turisticos: ");
    limpar_buffer();
    scanf("%d", &carta2.pontos_turisticos);

// Exibir todos os dados cadastrados das duas cartas
    printf("\n--- INFORMAÇOES CADASTRADAS ---\n");
    printf("--- Carta 1 ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo da Carta: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("Populaçao: %d\n", carta1.populacao);
    printf("Area: %f\n", carta1.area);
    printf("PIB: %f\n", carta1.pib);
    printf("Pontos turisticos: %d\n", carta1.pontos_turisticos);

    printf("--- Carta 2 ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo da Carta: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("Populaçao: %d\n", carta2.populacao);
    printf("Area: %f\n", carta2.area);
    printf("PIB: %f\n", carta2.pib);
    printf("Pontos turisticos: %d\n", carta2.pontos_turisticos);






    return 0;


   
    


}