


#include <stdio.h>

int fibonacci(int n){
	
	
	if(n < 2){
		
		return n;
	}
	
	
	return fibonacci(n -1) + fibonacci(n - 2);
		
	}



int main(int argc, char **argv)
{

	int numero;
	
	scanf("%d", &numero);
	
	
	printf("%d",fibonacci(numero));

	
	return 0;
}

