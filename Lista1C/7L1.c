
#include <stdio.h>

float media(float a, float b){
	
	float media = ((a*2) + (b*3))/5;
	
	return media;
	
	}



int main(int argc, char **argv)
{
	
	float x,y;
	scanf("%f",&x);
	scanf("%f",&y);
	printf("%f \n", media(x,y));
	
	return 0;
}

