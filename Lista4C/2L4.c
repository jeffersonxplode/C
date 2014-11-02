#include <ctype.h>
#include <string.h>
#include <stdio.h>

void palindromo(char palavra[]){
	
	
	int i = 0, f = 0;
	int j = strlen(palavra);
	char x[j];
	
	
	for (i;i<j;i++) {
		
		
		if(ispunct(palavra[i]) == 0){
			x[f] = palavra[i];			
			f++;
		}
		
		
	}

	int ss = f;
	char k[ss];
	
	
	strcpy(k,x);
	
	i = 0;
	
	if (ss % 2 == 0) {
		
		int z = ss /2;
		int y = 1;
		char aux;
		
		
		for (i;i<z;i++){
			
			aux = x[i];
			x[i] = x[ss - y];
			x[ss - y] = aux;
			y++;
			
		}		
	}	
	else {
		
		int z = (ss - 1) / 2;
		int y = 1;
		char aux;
		
		for (i;i<z;i++){
			
			aux = x[i];
			x[i] = x[ss - y];
			x[ss - y] = aux;
			y++;
			
			}
		
		}


	if ( strcmp(x,k) == 0) {
		
		printf("PALINDROMO \n");
		
		}
	else { 
		
		printf("NAO E PALINDROMO \n");

	}
}





int main(int argc, char **argv)
{
	
	
	char nome[999];
	
	scanf("%s",nome);
	
	palindromo(nome);
	
	return 0;
}

