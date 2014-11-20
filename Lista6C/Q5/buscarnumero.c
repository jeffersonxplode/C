#include <stdio.h>

int numero(int num, int busca){
	
	int soma = 0;
	int numisolado = num%10;
		
	if (num <= 0) {
		
		return 0;
		
		}
		
	if(numisolado == busca){
		
		soma = 1;
		
		}
	
	return soma + numero(num/10, busca);
	
}

int main(int argc, char **argv)
{
	
	int i,n;
	
	
	scanf("%d",&i);
	scanf("%d",&n);
	
	printf("%d", numero(i,n));
	
	
	return 0;
}

