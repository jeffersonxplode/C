#include <ctype.h>
#include <string.h>
#include <stdio.h>



void zenitpolar(char frase[]){
	
	
	
		int i = 0, j = strlen(frase);
		
		for (i;i<j;i++){
			
			if (frase[i] == 'z'){ frase[i] = 'p';}
			else if (frase[i] == 'e'){ frase[i] = 'o';}
			else if (frase[i] == 'n'){ frase[i] = 'l';}
			else if (frase[i] == 'i'){ frase[i] = 'a';}
			else if (frase[i] == 't'){ frase[i] = 'r';}
			
			else if (frase[i] == 'p'){ frase[i] = 'z';}
			else if (frase[i] == 'o'){ frase[i] = 'e';}
			else if (frase[i] == 'l'){ frase[i] = 'n';}
			else if (frase[i] == 'a'){ frase[i] = 'i';}
			else if (frase[i] == 'r'){ frase[i] = 't';}
		
					
			else if (frase[i] == 'Z'){ frase[i] = 'P';}
			else if (frase[i] == 'E'){ frase[i] = 'O';}
			else if (frase[i] == 'N'){ frase[i] = 'L';}
			else if (frase[i] == 'I'){ frase[i] = 'A';}
			else if (frase[i] == 'T'){ frase[i] = 'R';}
			
			else if (frase[i] == 'P'){ frase[i] = 'Z';}
			else if (frase[i] == 'O'){ frase[i] = 'E';}
			else if (frase[i] == 'L'){ frase[i] = 'N';}
			else if (frase[i] == 'A'){ frase[i] = 'I';}
			else if (frase[i] == 'R'){ frase[i] = 'T';}
		}
	
		printf("%s",frase);
	
	
	
	}


int main(int argc, char **argv)
{
	char frase[999];
	
	gets(frase);
	
	zenitpolar(frase);
	
	return 0;

}

