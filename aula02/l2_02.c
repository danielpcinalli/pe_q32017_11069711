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
	return 13591409+54514013*k;
}

float resultado(float somatorio)
{
	return 1.0/(12*somatorio);
}

int denominador_somatorio(int k)
{
	return pow(-1,k)*fatorial(6*k)*soma(k);
}

float numerador_somatorio(int k)
{
	return fatorial(3*k)*pow(fatorial(k),3)*pow(640320,3.0*k+1.5);
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
