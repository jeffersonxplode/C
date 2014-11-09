

#include <string.h>
#include <stdio.h>


int main(int argc, char **argv)
{

	char nome[999];
	
	scanf("%s",nome);
	
	int i = strlen(nome);
	int n =0,cont=0;
	char x[i];
	int f = 0;
	
	for (n;n<i;n++) {
		
		
		if(ispunct(nome[n]) == 0){
			x[f] = nome[n];
			cont++;
			f++;
			}
	
	}
	
	
	printf("%d \n",strlen(x));
	printf("%d",i);
	printf("%d",cont);
	printf("%s",x);
	return 0;
}

