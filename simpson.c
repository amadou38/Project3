#include<stdio.h>
#include<stdlib.h>

 double simpson( double *X, int N, double h, double (*pf[])(double x))
{
    double Som;
    int i, choixf;
     Som=(*pf[choixf])(X[0]);
	for(i=1; i<=N-1; i+=2)
		Som+=4*(*pf[choixf])(X[i]);
	for(i=2; i<=N-2; i+=2)
		Som+=2*(*pf[choixf])(X[i]);
	Som+=(*pf[choixf])(X[N]);
	Som*=h/3;
  return Som;
}
