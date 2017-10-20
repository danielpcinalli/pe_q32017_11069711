#include <stdio.h>
#include <stdlib.h>
#define TAM 255

int tamanho(char s[])
{
	int n=0;
	while(s[n] !='\0') n++;
	return n;
}

char *concatena(char *s1, char *s2)
{
	int m=tamanho(char s1[])
	int n=tamanho(char s2[])
	char res[m+n];
	for(int i=0;i<m;i++){
		
	}
}

int main()
{
	char s1[TAM];
	char s2[TAM];
	scanf("%s", s1);
	scanf("%s", s2);
	printf("%s\n",concatena(s1,s2));
	return 0;
}
