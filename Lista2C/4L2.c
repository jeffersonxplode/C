

void verificar (int a){
	
		int soma = 0;
		
		if (a > 0){
			
			int i = 2;
			
			for(i; i<a; i++){
				
					printf ("%d \n",i);
					soma = i + soma;
				
				}
			
			printf("%d \n",soma);	
				
		}
		else {
			printf ("NEGATIVO \n");
			}
	
	
	}



#include <stdio.h>

int main(int argc, char **argv)
{
	
	int x;
	
	scanf("%d",&x);
	verificar(x);
	
	
	return 0;
}

