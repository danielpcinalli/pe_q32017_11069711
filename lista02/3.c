#include <stdio.h>
#include <math.h>

double calcula_pi(double a,double b,double t,double p)
{
	double a1;
	double aproximacao=1;
	for(int i=1;i<=100;i++){
		a1=(a+b)/2;
		b=sqrt(a*b);
		t=t-p*pow((a-a1),2);
		p=2*p;
		a=a1;
	}
	aproximacao*=pow((a+b),2);
	aproximacao/=(4.0*t);
	return aproximacao;
}

int main()
{
	double a=1.0;
	double b=1.0/sqrt(2);
	double t=1.0/4;
	double p=1.0;
	printf("%.20f\n", calcula_pi(a,b,t,p));
	return 0;
}
