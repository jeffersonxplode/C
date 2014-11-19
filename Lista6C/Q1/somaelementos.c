

int somae (int x[], int n){
	
	int soma = x[n];
	
	if (n == 0){
		
		return x[0];
		
		}
	
	else {
	
		return soma + somae(x,n-1);
	
	}
	
}


#include <stdio.h>

int main(int argc, char **argv)
{
	
	
	int i[3];
	
	i[0] = 2;
	i[1] = 4;
	i[2] = 1;
	
	printf("%d",somae(i,3));
		
	return 0;
}

