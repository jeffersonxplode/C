#include <stdio.h>

void contarlinhas(FILE * arquivo) {
	
	
	char c;
	int cont = 1;
	 while( (c = fgetc(arquivo))!= EOF ){
		
			if (c == '\n') {
				
				cont++;
				
				}
	}
		
	printf("%d",cont);		
		
		
}

int main(int argc, char **argv)
{
	
	FILE *linhas;
	
	linhas = fopen("linhas.txt", "r");
	if(linhas == NULL)
	    printf("Erro, nao foi possivel abrir o arquivo\n");
	else
	   contarlinhas(linhas);	
	return 0;
}

