

#include <stdio.h>

void primo(int a){
	
		int cont = 0;
		int i = 2;
		
		for (i;i<=a;i++){
			
			if (a % i == 0) {
				
				cont++;
				
				}
		}
	
	
		if (cont < 2){
			
				printf("PRIMO \n");
			
			}
		
		else { printf("NAO E PRIMO \n"); }
		
	}


int main(int argc, char **argv)
{
	
	int x;
	scanf("%d",&x);
	primo(x);
	
	
	return 0;
}

