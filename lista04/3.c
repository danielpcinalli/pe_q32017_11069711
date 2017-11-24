#include <stdio.h>
#include <string.h>

typedef struct ficha_alunos
{
	char nome[100];
	int matricula;
	float p1;
	float p2;
	float p3;
} ficha_alunos;

typedef struct media_alunos
{
	char nome[100];
	int matricula;
	float media;
} media_alunos;

float mediaNotas(float p1,float p2,float p3)
{
	float media;
	media = p1+p2+p3;
	media/=3;
	return media;
}

int main()
{
	ficha_alunos ficha[50];
	media_alunos media[50];
	

	//Le ficha
	FILE *fp;
	fp=fopen("lista_alunos.txt","r");
	for(int i=0; i<50;i++){
		fscanf(fp,"%s %d %f %f %f\n", ficha[i].nome, &ficha[i].matricula,&ficha[i].p1,&ficha[i].p2,&ficha[i].p3);
	}
	fclose(fp);
	
	//Preenche struct media
	for(int i=0; i<50;i++){
		strcpy(media[i].nome,ficha[i].nome);
		media[i].matricula=ficha[i].matricula;
		media[i].media=mediaNotas(ficha[i].p1,ficha[i].p2,ficha[i].p3);
	}	
	
	//Preenche media_alunos.txt
	fp=fopen("media_alunos.txt","w");
	for(int i=0; i<50;i++){
		fprintf(fp,"%s %d %0.2f\n", media[i].nome, media[i].matricula,media[i].media);
	}
	fclose(fp);
	
	
	return 0;
}
