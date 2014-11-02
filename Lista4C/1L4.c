
#include <ctype.h>
#include <string.h>
#include <stdio.h>

void palavras(char frase[]){
	
	int i = 0;
	int j = strlen(frase);
	int cont = 0;
	
	for (i;i<j;i++){
		
		if(isspace(frase[i])){
			
			cont++;
			
			}
		
		}
	
	cont++;
	printf ("%d",cont);	
	
	
	
}


int main(int argc, char **argv)
{
	
	char frase[999];
	gets(frase);
	
	palavras(frase);
	
	return 0;
}

