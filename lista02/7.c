#include <stdio.h>
#include <math.h>

float celcToFahr(float valor)
{
	valor=valor*9/5+32;
	return valor;
}

float celcToKelv(float valor)
{
	valor+=273.15;
	return valor;
}
float fahrToCelc(float valor)
{
	valor-=32;
	valor/=(9.0/5.0);
	return valor;
}
float fahrToKelv(float valor)
{
	valor=fahrToCelc(valor);
	valor=celcToKelv(valor);
	return valor;
}
float kelvToCelc(float valor)
{
	valor-=273.15;
	return valor;
}
float kelvToFahr(float valor)
{
	valor= kelvToCelc(valor);
	valor=celcToFahr(valor);
	return valor;
}
float kelvToX(int baseto, float valor)
{
	switch(baseto)
	{
		case 1:
			return kelvToCelc(valor);
		break;
		case 2:
			return kelvToFahr(valor);
		break;
		case 3:
			return valor;
		break;
	}
}

float fahrToX(int baseto, float valor)
{
	switch(baseto)
	{
		case 1:
			return fahrToCelc(valor);
		break;
		case 2:
			return valor;
		break;
		case 3:
			return fahrToKelv(valor);
		break;
	}
}

float celcToX(int baseto, float valor)
{
	switch(baseto)
	{
		case 1:
			return valor;
		break;
		case 2:
			return celcToFahr(valor);
		break;
		case 3:
			return celcToKelv(valor);
		break;
	}
}

float decToBin(float x)
{
	int conv=0;
	for(int i=0;x;i++){
		conv+=(int)x%2*pow(10,i);
		x/=2;
	}
	return (float)conv;
}

float binToDec(float x)
{
	int conv=0;
	for(int i=0;x;i++){
		if((int)x%10){
			conv+=pow(2,i);
		}
		x/=10;
	}
	return (float)conv;
}

int decToX(int baseto, float valor)
{
	switch(baseto)
	{
		case 1:
			return valor;
		break;
		case 2:
			return decToBin(valor);
		break;
	}
}

int binToX(int baseto, float valor)
{
	switch(baseto)
	{
		case 1:
			return binToDec(valor);
		break;
		case 2:
			return valor;
		break;
	}
}

int conversaoBase(int basefrom, int baseto, float valor)
{
	switch(basefrom)
	{
		case 1:
			return decToX(baseto, valor);
		break;
		case 2:
			return binToX(baseto, valor);
		break;
	}
}

float conversaoTemp(int basefrom, int baseto, float valor)
{
	switch(basefrom)
	{
		case 1:
			return celcToX(baseto, valor);
		break;
		case 2:
			return fahrToX(baseto, valor);
		break;
		case 3:
			return kelvToX(baseto, valor);
		break;
	}
}

int escolheConversao(int opcao, int basefrom, int baseto, float valor)
{
	if (opcao==1) return conversaoTemp(basefrom, baseto, valor);
	else return conversaoBase(basefrom, baseto, valor);
}

int main()
{
	int opcao, basefrom, baseto;
	float valor;
	scanf("%d %d %d %f",&opcao, &basefrom, &baseto, &valor);
	//printf("%0.2f\n",escolheConversao(opcao, basefrom, baseto, valor));
	if (opcao==1) printf("%0.2f\n",conversaoTemp(basefrom, baseto, valor));
	else return printf("%d\n",(int)conversaoBase(basefrom, baseto, valor));
	
	return 0;
}
/*
int main(){
	
	int x,opcao;
	int conv=0;
	printf("Entre com um valor: \n");
	scanf("%d",&x);
	printf("Opção: \n");
	scanf("%d",&opcao);
	if(opcao==1){
		for(int i=0;x;i++){
			conv+=x%2*pow(10,i);
			x/=2;
		}
		printf("%d",conv);
	} else if(opcao==2){
		for(int i=0;x;i++){
			if(x%10){
				conv+=pow(2,i);
			}
			x/=10;
		}
		printf("%d",conv);
	}else{
		printf("Erro");
	}
	return 0;
}*/
