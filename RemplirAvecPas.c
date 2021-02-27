void RemplirAvecPas(double *X,double A,double h,int N)
  {
int i;
X[0]=A;
for(i=1;i<=N;i++)
  X[i]=A+i*h;
  }
