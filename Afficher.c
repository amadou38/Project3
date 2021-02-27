#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Afficher(int choixf,int choixm,double A,double B,int N)
{
	if(choixm==1) printf("\nLa formule de trapeze est utilisee ");
	if(choixm==2) printf("\nLa formule de simpson est utilisee ");
	if(choixm==3) printf("\nLes formules de trapeze et de simpson sont utilisees ");
	printf("pour approximer l'integrale definie de ");
	switch(choixf){
		case 1: printf("f(x)=sin(x)/x");
 	
			break;
			case 2:
 	printf("f(x)=1/x");
			break;
			case 3:;
 	printf("f(x)=sin(x)");
 
			case 4:
 	printf("f(x)=4/(1+x*x)");
 	
			break;
			case 5:
 	printf("f(x)=x/(1+x*x)");
 	
			break;
			case 6:
 	printf("f(x)=1/(7-2*x)");
 	
			break;
			case 7:
 	printf("f(x)=log|x|");
 	
			break;
			case 8:
 	printf("f(x)=x*exp(-x)");
			break;
	}
	printf(" sur l'intervale [%f,%f] en subdivisant cet intervalle en %d subdivisions\n",A,B,N);
	//printf("\nAppuyez sur <Entree> pour continuer");
  	//system("PAUSE");
  	//getchar();
}
