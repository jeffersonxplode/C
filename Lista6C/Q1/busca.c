

int busca (int x[],int qtd, int num){
	
		
	if(x[qtd] == num){
		
		return 1;
		
		}	
	
	else if(qtd == 0){
		
		return 0;
		
		}
	
	else if (qtd !=0) {
		
		return busca(x,qtd-1,num);
		
		
		}
	
}





#include <stdio.h>

int main(int argc, char **argv)
{
	
	int i[3],n;
	
	i[0] = 2;
	i[1] = 4;
	i[2] = 1;
	
	
	scanf("%d",&n);
	
	if( busca(i,3,n) == 1){
		
		printf("Encontrado \n");
		
		}
	else {
		
		printf("Nao encontrado \n");
		
		}
	
	
	return 0;
}

