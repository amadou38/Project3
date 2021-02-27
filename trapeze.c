#include<stdio.h>
#include<stdlib.h>

 double trapeze( double *X, int N, double h, double (*pf[])(double x))
{
	double Som;
	int i, choixf;
	Som=(*pf[choixf])(X[0])/2;
	for(i=1; i<=N-1; i++)
		Som+=(*pf[choixf])(X[i]);
	Som+=(*pf[choixf])(X[N])/2;
	Som*=h;
 return Som;
}
