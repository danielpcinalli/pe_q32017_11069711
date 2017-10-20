#include <stdio.h>
#include <stdlib.h>

void zera(int *p,int tamanho)
{
	for(int i=0;i<tamanho;i++){
		*(p+i)=0;
	}
}

int ehPrimo(int num)
{
	int primo=1;
	for(int i=2;i<=num/2;i++){
		if (!(num%i)) primo=0;	
	}
	return primo;
}

void preenchePrimos(int *p,int tamanho)
{
	p[0]=0;
	p[1]=1;
	for(int i=2;i<tamanho;i++){
		p[i]=ehPrimo(i);
	}
}



int main()
{
	int *primo;
	int tamanho;
	scanf("%d",&tamanho);
	primo=malloc(tamanho*sizeof(int));
	zera(primo,tamanho);
	preenchePrimos(primo,tamanho);
	for (int i=0;i<tamanho;i++){
		printf("%d %d\n",i,primo[i]);	
	}
	free(primo);
	return 0;
}
