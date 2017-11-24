#include <stdio.h>

typedef struct timer
{
	int m;//minutos
	int s;//segundos
	int c;//centesimos
	char sinal;//Representa sinal, necessario apenas apos subtracao
} timer;

timer sub_timer(timer t1, timer t2)
{
	timer t3;
	int tempo;
	
	//armazena tempo em centesimos de segundo
	tempo=t2.c-t1.c;
	tempo+=100*(t2.s-t1.s);
	tempo+=60*100*(t2.m-t1.m);
	
	t3.sinal='\0';//Caso sinal>0, nao necessario printar '+'
	
	//Bloco para evitar respostas como '0m -50s -90' e trocar sinal
	if (tempo<0){
		tempo*=-1;
		t3.sinal='-';
	}
	
	//Converte tempo para min, seg, e centesimos
	t3.m=tempo/6000;
	tempo%=6000;
	
	t3.s=tempo/100;
	tempo%=100;
	
	t3.c=tempo;
	
	return t3;
}

int main()
{
	timer t1, t2, t3;
	scanf("%dm %ds %d",&t1.m,&t1.s,&t1.c);
	scanf("%dm %ds %d",&t2.m,&t2.s,&t2.c);
	t3=sub_timer(t1,t2);
	printf("%c%dm %ds %d\n", t3.sinal,t3.m,t3.s,t3.c);
	return 0;

}
