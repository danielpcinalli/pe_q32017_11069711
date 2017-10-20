#include <stdio.h>
#include <math.h>

int fatorial(int x)
{
	int fat=1;
	for (x;x>1;x--){
		fat*=x;
	}
	return fat;
}

int soma(int k)
{
	return 1103+26390*k;
}

float resultado(float somatorio)
{
	return 9801.0/(2.0*sqrt(2)*somatorio);
}

int denominador_somatorio(int k)
{
	return fatorial(4*k)*soma(k);
}

float numerador_somatorio(int k)
{
	return pow(fatorial(k),4)*pow(396,4*k);
}

int main()
{
	int iteracoes=3;
	float somatorio=0;
	for(int k=0;k<iteracoes;k++){
		somatorio+=1.0*denominador_somatorio(k)/numerador_somatorio(k);
	}
	printf("%f\n",resultado(somatorio));
	return 0;
}
