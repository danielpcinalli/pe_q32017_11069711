#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;
int desloc=sizeof(unsigned long int)*8;//tamanho em bits de ulint


ulint f1 (ulint x, ulint y)
{
	if(x==y) return 0;
	if(x<y) return -1;
	return 1;
}

ulint f2 (ulint x, ulint y)
{
	int bitx,bity;//armazena ultimo bit de x e y, respectivamente
	int maior=0;//retorna 0 caso os dois nums forem iguais
	
	//Compara o ultimo bit para ver qual o maior num ate o momento
	//e depois desloca para a direita para comparar proximo bit
	for (int i=0;i<desloc;i++){
		bitx=x&1;
		bity=y&1;
		
		//Armazena qual o maior ate o momento
		if (~bitx&bity) maior=1;
		if (bitx&~bity) maior=-1;
		
		//desloca para a direita para comparar proximo bit
		x=x>>1;
		y=y>>1;
	}
	return maior;
}

int main(void){

	clock_t tempo_init, tempo_fim;
	double tempo_gasto;
	ulint soma=0;
	
	tempo_init=clock();
	for(int i=0;i<BIGNUM;i++){
		soma+=f1(i,i+BIGNUM/2);
	}
	tempo_fim=clock();
	tempo_gasto=(double)(tempo_fim-tempo_init)/CLOCKS_PER_SEC;
	printf("Tempo gasto na versao normal : %lf\n",tempo_gasto);
	
	tempo_init=clock();
	for(int i=0;i<BIGNUM;i++){
		soma+=f2(i,i+BIGNUM/2);
	}
	tempo_fim=clock();
	tempo_gasto=(double)(tempo_fim-tempo_init)/CLOCKS_PER_SEC;
	printf("Tempo gasto na versao bitwise: %lf\n",tempo_gasto);
	
	return 0;
}
