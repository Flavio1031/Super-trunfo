#include <stdio.h>

int main (){
 // Dados para a Carta 1 
 char estado1[] = "Rio de janeiro";
 char codigo1[] = "A01";
 char cidade1[] = "Rio de janeiro";
 int populacao1 = 2927000;
 float area1 = 706.8;
 float pib1 = 10000.0;
 int pontos_turisticos1 = 15;

 // Dados para a Carta 2 
 char estado2[] = "Minas Gerais";
 char codigo2[] = "A02";
 char cidade2[] = "Belo Horizonte";
 int populacao2 = 1646000;
 float area2 = 218.0;
 float pib2 = 8000.0;
 int pontos_turisticos2 = 12;


 printf ("DADOS PARA CARTA1 \n");
 printf(" Nome do estado é: %s \n", estado1);
 printf(" o codigo da carta é: %s \n", codigo1);
 printf(" Nome da cidade é: %s \n", cidade1 );
 printf(" populacao: %d \n", populacao1);
 printf(" área é: %.2f \n ", area1);
 printf(" pib é: %.2f \n", pib1);
 printf(" pontos turistico é: %d \n", pontos_turisticos1);


 printf ("DADOS PARA CARTA 2 \n");
 printf(" Nome do estado é: %s \n", estado2);
 printf(" o codigo da carta é: %s \n", codigo2);
 printf(" Nome da cidade é: %s \n ", cidade2 );
 printf(" populacao: %d \n", populacao2);
 printf(" área é: %.2f \n", area2);
 printf(" pib é: %.2f \n ", pib2);
 printf(" pontos turistico é: %d \n ", pontos_turisticos2);

 return 0; 

}