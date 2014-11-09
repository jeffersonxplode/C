#include <stdio.h>

int gera_divisores(unsigned long int num, FILE * arquivo){ 
 
	int i = 1;
	
	fprintf(arquivo, "Divisores de %ld: \n", num);
	
	for(i;i<=num;i++){
		
		if(num % i == 0){
			
			fprintf(arquivo, "%d \n", i);
		
		}
	}

	
	return 0; 

}


int main(int argc, char **argv)
{
	
	unsigned long int num;
	FILE * arq_divisores;
	
	arq_divisores = fopen("divisores.txt","w"); 
	
	if (arq_divisores== NULL){ 
		printf("ERROR: Não foi possível abrir o arquivo.\n"); 
		return 2; 
	} 
	
	scanf("%ld",&num);
	
	gera_divisores(num, arq_divisores);
	
	if (gera_divisores(num,arq_divisores) != 0){ 
		printf("ERROR: Problemas ao escrever dados no arquivo. \n"); 
		return 3; 
	}
	
	
	
	fclose(arq_divisores); 	
	return 0;
}

