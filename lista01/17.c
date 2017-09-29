#include <stdio.h>

int main(){
	int x,y,somaquad=0,quadsoma=0;
	printf("Primeiro valor:");
	scanf("%d",&x);
	printf("Segundo valor:");
	scanf("%d",&y);
	for(x;x<=y;x++){
		quadsoma+=x;
		somaquad+=x*x;
	}
	quadsoma*=quadsoma;
	printf("soma dos quadrados = %d\n",somaquad);
	printf("quadrado da soma   = %d\n",quadsoma);
	printf("diferança          = %d\n",quadsoma-somaquad);
	return 0;
}
