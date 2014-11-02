

#include <stdio.h>


void verificar(int dia, int mes, int ano){
	
	if(dia <= 31 && dia > 0){
	
		if (dia > 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) {
			
				printf("DAVA INVALIDA \n");
			
			}
		
		else if (dia > 28 && mes == 2){
			
				printf("DAVA INVALIDA \n");
			}
			
		
		else  {
			
				printf("DAVA VALIDA \n");
				
			}
	
	}
	
	else { 
		printf("DAVA INVALIDA \n");
	}

}




int main(int argc, char **argv)
{
	
	int x,y,z;
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	
	
	verificar(x,y,z);
	
	
	return 0;
}

