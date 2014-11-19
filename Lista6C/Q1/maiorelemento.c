#include <stdio.h>

int maior (int x[], int n){
	
	int m;
	
	if(n == 1){
		
		m = x[0];
		
		}
		
	else {
		
		m = maior(x,n-1);
		if(x[n-1] > m){
			m = x[n-1]; 
			}
		
		
		}
	
	return m;
	
	
	}

int main(int argc, char **argv)
{
	
	int i[3];
	
	i[0] = 2;
	i[1] = 4;
	i[2] = 1;
	
	printf("%d",maior(i,3));
	
	return 0;
}

