#include <ctype.h>
#include <string.h>
#include <stdio.h>

void zenitpolar(FILE * zenit) {


	char c;
	
	

	while( (c = fgetc(zenit))!= EOF){	
		
		printf("%c",c);
		
		if (c == 'z'){ c = 'p';}
		else if (c == 'e'){ c = 'o';}
		else if (c == 'n'){ c = 'l';}
		else if (c == 'i'){ c = 'a';}
		else if (c == 't'){ c = 'r';}
		else if (c == 'p'){ c = 'z';}
		else if (c == 'o'){ c = 'e';}
		else if (c == 'l'){ c = 'n';}
		else if (c == 'a'){ c = 'i';}
		else if (c == 'r'){ c = 't';}
		else if (c == 'Z'){ c = 'P';}
		else if (c == 'E'){ c = 'O';}
		else if (c == 'N'){ c = 'L';}
		else if (c == 'I'){ c = 'A';}
		else if (c == 'T'){ c = 'R';}
		else if (c == 'P'){ c = 'Z';}
		else if (c == 'O'){ c = 'E';}
		else if (c == 'L'){ c = 'N';}
		else if (c == 'A'){ c = 'I';}
		else if (c == 'R'){ c = 'T';}
			
	
	}
}



int main(int argc, char **argv)
{

	FILE * zenitpolars;	

	char arquivo[999]; /* zp[3] = ".zp"; */

	
	gets(arquivo);

	/*
	int i = 0, j = strlen(arquivo);
	for (i;i<j;i++){
		
		if (arquivo[i] == 'z'){ arquivo[i] = 'p';}
		else if (arquivo[i] == 'e'){ arquivo[i] = 'o';}
		else if (arquivo[i] == 'n'){ arquivo[i] = 'l';}
		else if (arquivo[i] == 'i'){ arquivo[i] = 'a';}
		else if (arquivo[i] == 't'){ arquivo[i] = 'r';}
		else if (arquivo[i] == 'p'){ arquivo[i] = 'z';}
		else if (arquivo[i] == 'o'){ arquivo[i] = 'e';}
		else if (arquivo[i] == 'l'){ arquivo[i] = 'n';}
		else if (arquivo[i] == 'a'){ arquivo[i] = 'i';}
		else if (arquivo[i] == 'r'){ arquivo[i] = 't';}
		else if (arquivo[i] == 'Z'){ arquivo[i] = 'P';}
		else if (arquivo[i] == 'E'){ arquivo[i] = 'O';}
		else if (arquivo[i] == 'N'){ arquivo[i] = 'L';}
		else if (arquivo[i] == 'I'){ arquivo[i] = 'A';}
		else if (arquivo[i] == 'T'){ arquivo[i] = 'R';}
		else if (arquivo[i] == 'P'){ arquivo[i] = 'Z';}
		else if (arquivo[i] == 'O'){ arquivo[i] = 'E';}
		else if (arquivo[i] == 'L'){ arquivo[i] = 'N';}
		else if (arquivo[i] == 'A'){ arquivo[i] = 'I';}
		else if (arquivo[i] == 'R'){ arquivo[i] = 'T';}
	}

	*/
	zenitpolars = fopen(arquivo,"r+"); 

	if (zenitpolars == NULL){ 
		printf("ERROR: Não foi possível abrir o arquivo.\n"); 
		return 1; 
	}

	zenitpolar(zenitpolars);	
	
	fclose(zenitpolars);	

	return 0;

}

