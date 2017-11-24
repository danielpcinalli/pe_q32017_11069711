#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX
typedef unsigned long int ulint;


ulint f1 (ulint x)
{
	if(!x) return 0;
	while(x%2==0){
		if (x==2) return 1;
		x/=2;
	}
	return 0;
}

ulint f2 (ulint x)
{
/*
	if(!x) return 0;
	while(!(x&1)){
		if (x==2) return 1;
		x=x>>1;
	}
	return 0;
*/
	return (x && !(x & (x-1)));	
}

int main(void){
	clock_t tempo_init, tempo_fim;
	double tempo_gasto;
	ulint soma=0;
	
	tempo_init=clock();
	for(int i=0;i<BIGNUM;i++){
		soma+=f1(i);
	}
	tempo_fim=clock();
	tempo_gasto=(double)(tempo_fim-tempo_init)/CLOCKS_PER_SEC;
	printf("Tempo gasto na versao normal : %lf\n",tempo_gasto);
	
	tempo_init=clock();
	for(int i=0;i<BIGNUM;i++){
		soma+=f2(i);
	}
	tempo_fim=clock();
	tempo_gasto=(double)(tempo_fim-tempo_init)/CLOCKS_PER_SEC;
	printf("Tempo gasto na versao bitwise: %lf\n",tempo_gasto);
	
	return 0;
}
