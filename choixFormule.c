#include<stdio.h>
#include<stdlib.h>
int choixFormule(int c)
{int choix;
	printf("\nChoisissez la formule d'integration numerique:");
	printf("\n\t<1>Formule des trapezes");
	printf("\n\t<2>Formule de Simpson");
	printf("\n\t<3>Les deux formules");
	do{
		printf("\nChoix<1-3>?: ");
		scanf("%d",&choix);
	}while(choix<1 || choix>3);
if(choix==1) printf("\nLa formule des trapezes est choisie pour approximer l'integrale d'une fonction sur un intervalle [A,B]");
if(choix==2) printf("\nLa formule des Simpson est choisie pour approximer l'integrale d'une fonction sur un intervalle [A,B]");
if(choix==3) printf("\nLes formules de trapezes et Simpson sont choisies pour approximer l'integrale d'une fonction sur un intervalle [A,B]");
	return choix;
}
