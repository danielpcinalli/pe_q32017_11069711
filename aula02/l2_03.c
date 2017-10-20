#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.exe>

int dentro_do_circulo(float x,float y)
{
	if(pow(x-0.5,2)+pow(y-0.5,2)<=pow(0.5,2){
		return 1;
	} else{
		return 0;
	}
}

int main()
{
	srand(time(NULL));
	int total=0;
	int ptos_circ=0;
	int iteracoes=1000;
	for (iteracoes;iteracoes>1;i--){
		float x=rand();
		float y=rand();
		if(dentro_do_circulo(x,y)){
			ptos_circ+=1;
		}
		total+=1;
	}
	printf("%f",4.0*ptos_circ/total);
	return 0;
}
