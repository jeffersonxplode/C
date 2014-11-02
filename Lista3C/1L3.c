#include <stdio.h>




void diferenca(int i[], int a){
	
	int diferenca= -99999999;
	int x = 0;
	
	for (x;x<a;x++){
		
		if( (i[x] - i[x+1]) > diferenca) {
				
					
				diferenca = i[x] - i[x+1];
			
			}
		
		
		}
	
	printf("%d ccc \n",diferenca);	
	
	
	}




int main(int argc, char **argv)
{
	
	int a[1000];
	int i = 0;
	int n = sizeof(a) / sizeof(a[0]);
	
	
	for (i;i<n;i++){
		
		scanf("%d",&a[i]);
		
	}
	
	diferenca(a,n);
	
	return 0;
}

