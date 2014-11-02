


#include <stdio.h>

void massa(double a, int x){
	
	double massa = a;
	int tempo = x;
	int tempot = 0;
	
	while (massa > 1){
		
		massa = massa/2;
		tempot = tempot + tempo;
	}
		
	printf ("%d \n",tempot);
	
	}


int main(int argc, char **argv)
{
	
	double x;
	int y;
	
	scanf("%lf",&x);
	scanf("%d",&y);
	massa(x,y);
	return 0;
}

