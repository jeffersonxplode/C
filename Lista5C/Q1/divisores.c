#include <stdio.h>
#include "divisores.h"


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
	
	
	

