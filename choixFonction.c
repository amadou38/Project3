#include<stdio.h>
int choixFonction(int c)
 {
 	int choix;
 	printf("\nChoisissez une fonction parmi les fonctions suivantes");
 	printf("\n\t<1>f(x)=sin(x)/x");
 	printf("\n\t<2>f(x)=1/x");
 	printf("\n\t<3>f(x)=sin(x)");
 	printf("\n\t<4>f(x)=4/(1+x*x)");
 	printf("\n\t<5>f(x)=x/(1+x*x)");
 	printf("\n\t<6>f(x)=1/(7-2*x)");
 	printf("\n\t<7>f(x)=log|x|");
 	printf("\n\t<8>f(x)=x*exp(-x)");
 	do{
 		printf("\nChoix<1-8>?: ");
 		scanf("%d",&choix);
	 }while(choix<1 || choix>8);
	 return choix;
 }
