


#include <stdio.h>


int soma(int a, int b){
	
	int resultado = a + b;
	
	return resultado;
	
	
	}


int main(int argc, char **argv)
{
	int x,y;
	
	scanf("%d",&x);
	scanf("%d",&y);
	
	printf("%d",soma(x,y));
	
	return 0;
}

