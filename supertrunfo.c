#include <stdio.h>

int main(){
char estado[20] = "minas gerais";
char codigodacarta[8] = "m01,m02";
long int populaçao = 2053998900;
float areaemkm = 586.528;
float pib = 275.3;
int numerodepontosturisticos = 5000;
char nomedacidade[18] = "belo horizonte";
char carta1[20];

printf("carta 1: %s\n",carta1);
printf("estado: %s\n", estado);
printf("nome da cidade: %s\n", nomedacidade);
printf("populaçao: %i\n", populaçao);
printf("codigo da carta: %s\n", codigodacarta);
printf("area em km²: %.3f\n", areaemkm);
printf("pib: %.2f bilhoes de reais\n", pib); 
printf("pontos turisticos: %i\n",numerodepontosturisticos);

printf("\n");

printf("carta 1 : %c\n", carta1);

printf("digite seu estado: ");
scanf("%s", &estado);
printf("seu estado e: %s\n", estado);

printf("digite sua cidade:");
scanf("%S", &nomedacidade);
printf("sua cidade e: %s\n", nomedacidade);

printf("sua populaçao e: %i\n", populaçao);

printf("codigo da carta: %s\n", codigodacarta);

printf("area em km²: %.3f\n", areaemkm);

printf("pib: %.2f bilhoes de reais\n", pib); 

printf("pontos turisticos: %i\n",numerodepontosturisticos);

printf("\n");
char carta2 [20];
char estado1[15] =  "espirito santo";
int numerodepontosturisticos1 = 15;
float areakm = 46.095;
char nomedacidade1[15] = "vitoria";
char codigodacarta1[20] = "e01-e02";
int populaçao1 = 4102129;
float pib2 =  206.2;
printf("carta 2: %s\n", carta2);
printf("estado: %s\n", estado1);
printf("cidade: %s\n", nomedacidade1);
printf("populaçao: %i\n", populaçao1);
printf("codigo da carta: %s\n", codigodacarta1);
printf("area em km²: %.3f\n", areakm);
printf("pib: %.1f bilhoes de reais\n", pib2);
printf("ponto turisticos: %i\n", numerodepontosturisticos1);

printf("\n");

printf("carta 2: %s\n", carta2);

printf("digite seu estado:");
scanf("%s", &estado1);
printf(" seu estado e: %s\n", estado1);

printf(" digite sua cidade: ");
scanf("%s", &nomedacidade1);
printf(" sua cidade e: %s\n", nomedacidade1);

printf("populaçao: %i\n", populaçao1);

printf("codigo da carta: %s\n", codigodacarta1); 

printf("area em km²: %.3f\n", areakm);

printf("pib: %.1f bilhoes de reais\n", pib2);

printf("ponto turisticos: %i\n", numerodepontosturisticos1);

return 0;

}


