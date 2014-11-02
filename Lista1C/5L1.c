
#include <stdio.h>

int menor(int a, int b){
	
	int menor;
	
	if(a<b){
		
			menor = a;
		
		}
	else {
			menor = b;
		
		}
	
	return menor;
	
	}


int main(int argc, char **argv)
{
	
	int x,y;
	
	scanf("%d",&x);
	scanf("%d",&y);
	
	printf("%d",menor(x,y));
	
	
	
	
	return 0;
}

