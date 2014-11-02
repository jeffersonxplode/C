#include <stdio.h>


void situacao(float a, float b){
	
	
	float media = ((a*2) + (b*3))/5;
	
	
	if (media < 6 && media > 3){
		
		printf("RECUPERACAO \n");
		
		}
	
	
	else if (media > 6 ){
		
		printf("APROVADO \n");
		
	}	
	
	else if (media < 3 ){
		
		printf("REPROVADO \n");
		
	}
	
	}


int main(int argc, char **argv)
{
	
	float x,y;
	scanf("%f",&x);
	scanf("%f",&y);
	
	situacao(x,y);
	
	
	return 0;
}

