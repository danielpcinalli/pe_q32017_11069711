#include <stdio.h>
#include <math.h>

int raiz_eh_real(float a,float b,float c)
{
if (pow(b,2)>=0) return 1;
else return 0;
}

void calcula_raiz_real(float a,float b,float c, float raiz[])
{
	float termo1=(-1.0)*b;
	termo1/=(2*a);
	float termo2=pow(b,2)-4.0*a*c;
	termo2=sqrt(termo2);
	termo2/=(2*a);
	raiz[0]=termo1+termo2;
	raiz[1]=termo1-termo2;	
}

void calcula_raiz(float a,float b,float c, float raiz[])
{
	if (raiz_eh_real(a,b,c)) calcula_raiz_real(a,b,c,raiz);
	//else calcula_raizes_complexas(a,b,c,raiz);
}

int main()
{
	float a,b,c;
	float raiz[2];
	scanf("%f %f %f", &a, &b, &c);
	calcula_raiz(a,b,c,raiz);
	printf("%.2f %.2f\n", raiz[0], raiz[1]);
	return 0;
}
