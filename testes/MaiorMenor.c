#include <stdlib.h>
#include <stdio.h>


int * MaiorMenor (int a[], int qnt){
	
	int * array = (int*) malloc (2*sizeof(int)); 	
	
	if(qnt == 1){
		
		array[0] = a[0];
		array[1] = a[0];
		
		}
		
	else{
	
		array = MaiorMenor(a,qnt-1);		
		
		if(a[qnt-1] < array[0]){
			
			array[0] = a[qnt-1];	
		
		}
		
		if(a[qnt-1] > array[1]){
			
			array[1] = a[qnt-1];
		
		}
	
	}	
	
	return array;
		

}
		
int main(int argc, char **argv)
{
	
	int a[5] = {3,2,4,6,1};
	int * ponteiro;
	
	ponteiro = MaiorMenor(a,5);
	
	printf("%d \n",ponteiro[0]);
	printf("%d \n",ponteiro[1]);
	
	return 0;
}

