#include <stdio.h>
#include <math.h>

float soma(float x,float y)
{
	return x+y;
}

float subtracao(float x,float y)
{
	return x-y;
}

float multiplicacao(float x,float y)
{
	return x*y;
}

float divisao(float x,float y)
{
	return x/y;
}

float potencia(float x,float y)
{
	return pow(x,y);
}

float calculadora(int opcao,float x,float y)
{
	switch(opcao)
	{
		case 1:
			return soma(x,y);
		break;

		case 2:
			return subtracao(x,y);
		break;

		case 3:
			return multiplicacao(x,y);
		break;

		case 4:
			return divisao(x,y);
		break;

		case 5:
			return potencia(x,y);
		break;
	}
}



int main()
{
	int opcao;
	float x,y;
	scanf("%d %f %f", &opcao,&x, &y);
	printf("%.2f\n", calculadora(opcao,x,y));
	return 0;
}
