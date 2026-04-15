#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char Carta[5]
char Estado;
char Codigo[04];
char Cidade[20];
int População;
float Area;
int PIB;
int PontosTuristicos;


  // Área para entrada de dados
printf ("Digite numero da carta de 1 a 2:\n")
scanf ("%s",Carta);

printf ("Digite Uma letra de 'A' a 'H' para o estado:\n")
scanf ("%c",&Estado);

printf ("Digite um codigo de 01 a 04:\n")
scanf ("%s",Codigo);

printf ("Digite o nome da Cidade:\n")
scanf ("%s",Cidade);

printf ("Digite o número da população:\n")
scanf ("%i",&População);

printf ("Digite A área da cidade em quilômetros quadrados:\n")
scanf ("%f",&Area);

printf ("Digite O Produto Interno Bruto da cidades:\n")
scanf ("%i",&PIB);

printf ("Digite A quantidade de pontos turísticos na cidade:\n")
scanf ("%i",PontosTuristicos);

// Área para exibição dos dados da cidade

printf("Carta: %s\n", Carta);

printf("Estado: %c\n", Estado);

printf("Codigo: %c,%s\n", Estado, Codigo);

printf("Cidade: %c\n", Cidade);

printf("População: %i\n", &População);

printf("Area: %f\n", &Area);

printf("PIB: %i\n", &PIB);

printf("Pontos Turisticos: %i, &PontoTurusticos")


return 0;
} 
