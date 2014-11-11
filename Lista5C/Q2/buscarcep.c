#include <stdio.h>


void procurarcep (char cep[], FILE * arquivo){
	
	
	char c;
	int cont = 0;
	int cont2 = 0; /* Variavel criada para ir avançando entra as posições do arquivo */
	int i = 0;
	
	 while( (c = fgetc(arquivo))!= EOF ){ /* Aqui ele vai atribuir cada caractere do arquivo na variavel "c" */
		 
		if (cep[i] == c) { /* Caso o caractere for igual ao primeiro numero do cep indicado ele vai entrar nessa condição, aumentando a contagem e a variavel "i" para avançar o numero do cep */
			
			cont++;
			i++;
			
			}
		
		if ( c == ':'  && cont == 9){
			fseek(arquivo, cont2 + 1, SEEK_SET ); /* Caso ele encontrar o caractere ":" ele checa o cont e se ele valer 9, ele vai começar a ler o arquivo a parti da posição indiacada
													acrencentando +1 para passa dos ":" */
			break;
			
		}	
		
		if (c == '\n'|| c == ':') { /* Encontrado algum desses caracteres ele vai reiniciar os contadores */
			
			i = 0;
			cont = 0;
			
			
			} 
			
		if  (c == '\n'){ /* A cada quebra de linha ele não conta como um avanço no arquivo, então eu fiz isso para arrumar*/
			
			cont2++;  /* Se você usa Linux pode desconsiderar essa linha*/
			
			}	
		 
		cont2++;  /* Ir avançando a posição do arquivo */
	}
	
	if (cont == 9) {  
				
			while((c = fgetc(arquivo))!= EOF ){  /* Com o arquivo reiniciado a partir da posição que indicamos só basta imprimir tudo que vier depois até vir uma quebra de linha */
				
				putchar(c);
				
				if (c == '\n'){
					break;
					}
				
			}		
		}
} 


int main(int argc, char **argv)
{
	
	FILE * enderecos;
	
	
	enderecos = fopen( argv[2],"r"); 
	
	if (enderecos == NULL){ 
		printf("ERROR: Não foi possível abrir o arquivo.\n"); 
		return 1; 
	} 
	
	
	
	procurarcep(argv[1], enderecos);
	
	fclose(enderecos);

	return 0;
}

