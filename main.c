#include<stdio.h>
#include<stdlib.h>
int main(){
double f1(double x);
double f2(double x);
double f3(double x);
double f4(double x);
double f5(double x);
double f6(double x);
double f7(double x);
double f8(double x);
double trapeze( double *X, int N, double h, double (*pf[])(double x));
double simpson( double *X, int N, double h, double (*pf[])(double x));
void RemplirAvecPas(double *X,double A,double h,int N);
double *TableauReel(int ig,int id);
int choixFormule(int c);
double (*pf[])(double x)={&f1,&f1,&f2,&f3,&f4,&f5,&f6,&f7,&f8};
void Entete(int c);
int choixFonction(int c);
void Afficher(int choixf,int choixm,double A,double B,int N);
double *X;
double res;
double res1;
double res2;
double A;
double B;
int N;
double h;
int choixm;
int choixf;
int rep,repi,repf,repm ;
repi=1;
repm=1;
repf=1;
Entete(1);
while(repi==1 || repm==1 || repf==1)
{
if(repm==1)choixm=choixFormule(1);
if(repf==1)choixf=choixFonction(1);
if(repi==1){
printf("\nentrer la borne gauche de l'intervalle A ");
scanf("%lf",&A);
printf("\nla borne gauche de l'intervalle est A=%f",A);
do{
printf("\nentrer la borne droite de l'intervalle B ");
scanf("%lf",&B);
}
while(B<=A);
printf("\nla borne droite de l'intervalle est B=%f",B);
do{
printf("\nentrer le nombre de subdivision N ");
scanf("%d",&N);
}
while(N<0);
printf("\nle nombre de subdivision N est N=%d",N);
if(choixm!=1)
if(N%2==1){
printf("\nN doit etre pair");
printf("\nle nombre courant de subdivision N=%d",N);
do{
printf("\nentrer la nouvelle valeur du nombre de subdivison N ");
scanf("%d",&N);
}
while(N%2==1 && N<0);
printf("\nle nombre de subdivision N est N=%d",N);
printf("\nla borne gauche de l'intervalle est A=%lf",A);
printf("\nla borne droite de l'intervalle est B=%lf",B);
printf("\nle nombre de subdivision  est N=%d",N);
}
do{
printf("\nVoulez vous faire des changements ?<1:pour oui|2:pour non> ");
scanf("%d",&rep);
}
while((rep!=1)&&(rep!=2));
if(rep==1){
printf("\nla borne gauche courante de l'intervalle est A=%lf",A);
printf("\nentrer la nouvelle borne gauche de l'intervalle A= ");
scanf("%lf",&A);
printf("\nla borne droite courante de l'intervalle est B=%lf",B);
do{
printf("\nentrer la borne droite de l'intervalle B= ");
scanf("%lf",&B);
}
while(B<=A);
printf("\nle nombre de subdivision courant est N=%d",N);
do{
printf("\nentrer la nouvelle valeur du nombre de subdivison N ");
scanf("%d",&N);
}while(N<0);
if(choixm!=1)
if(N%2==1){
printf("\nN doit etre pair");
printf("\nle nombre courant de subdivision N=%d",N);
do{
printf("\nentrer la nouvelle valeur du nombre de subdivison N ");
scanf("%d",&N);
}
while(N%2==1);
}}
}

X=TableauReel(0,N);
h=(B-A)/N;
RemplirAvecPas(X,A,h,N);
if(choixf==1 || choixf==2 || choixf==7){
	if(A==0) {
		printf("\nA ne doit pas être nul ");
		do{printf("\nSaisir la nouvelle valeur de A");
		scanf("%lf",&A);
		}while(A==0);
	}
		if(B==0){
		printf("\nB ne doit pas être nul ");
		do{printf("\nSaisir la nouvelle valeur de B");
		scanf("%lf",&B);
		}while(B==0 || B<A);
	}
}
Afficher(choixf,choixm,A,B,N);
switch(choixm)
			{
				case 1: 
						res=trapeze(X, N, h, &pf[choixf]);
						printf("La valeur approchee de cet integrale par la formule des Trapezes est: %f\n", res);
					break;
				case 2:
						res=simpson(X, N, h, &pf[choixf]);
						printf("La valeur approchee de cet integrale par la formule de Simpson est: %f\n", res);
					break;
				case 3:
						res1=trapeze(X, N, h, &pf[choixf]);
						res2=simpson(X, N, h, &pf[choixf]);
						printf("La valeur approchee de cet integrale par la formule des Trapezes est: %f\n", res1);
						printf("La valeur approchee de cet integrale par la formule de Simpson est: %f\n", res2);
					break;
				
			}
do{
	printf("\nVoulez vous changer l'intervalle? 1 pour oui et 2 pour non");
	scanf("%d",&repi);
}
while(repi<1 || repi>2);
do{
	printf("\nVoulez vous changer la fonction? 1 pour oui et 2 pour non");
	scanf("%d",&repf);
}
while(repf<1 || repf>2);	
do{
	printf("\nVoulez vous changer la methode? 1 pour oui et 2 pour non");
	scanf("%d",&repm);
}
while(repm<1 || repm>2);	
}
printf("\nAu revoir\n");
system("pause");
return 0;
}








