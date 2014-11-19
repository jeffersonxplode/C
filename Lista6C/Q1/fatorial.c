


#include <stdio.h>



int fatorial(int n){
	
	
	if (n == 0){
		
		return 1;
		
		}
	
	return n * fatorial(n - 1);

}






int main(int argc, char **argv)
{
	
	int numero;
	scanf("%d",&numero);
	
	
	printf("%d",fatorial(numero));
		
	return 0;
}

