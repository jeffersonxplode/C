

#include <stdio.h>

void media(double a[], int b){
	
	
		double media = 0;
		int i = 0,contm = 0,contmn = 0;
		
		for(i; i<b;i++){
			
			media = a[i] + media;	
		}
		
		media = media / b;
		i = 0;
		printf("%lf \n",media);
		
		for(i; i<b;i++){
			
			if(a[i] > media){
				
				printf("%lf \n",a[i]);
				contm++;
			}
		}
		
		printf("%d MAIORES \n",contm);
		i = 0;
		for(i; i<b;i++){
			
			if(a[i] < media){
				
				printf("%lf \n",a[i]);
				contmn++;
			}
		}
		
		printf("%d MENORES \n",contmn);
}
		
	
	
	
	


int main(int argc, char **argv)
{
	
	int x=0,i=0;
	
	printf("DIGITE QUANTOS NUMEROS LER \n");
	scanf("%d",&x);
	
	double y[x];
	
	for(i; i<x;i++){
		scanf("%lf",&y[i]);
	}
	
	media(y,x);
	
	return 0;
}

