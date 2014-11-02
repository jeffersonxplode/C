


#include <stdio.h>

void mdc(int a, int b){
	
	int maior,menor,z,w,resto;
	
	if( a > b) {
		maior = a;
		menor = b;
		}
	else {
		maior = b;
		menor = a;
	}	
	
	
	z = maior;
	w = menor;
	
	
	while (w != 0){
        
        resto = z % w;
        z = w;
        w = resto;
   
	}
	
	printf("%d",z);
	
}


int main(int argc, char **argv)
{
	
	int x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	mdc(x,y);
	return 0;
}

