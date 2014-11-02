

#include <stdio.h>

float converter(float a){
	
	
		float resultado = (((a - 32) * 5 ) / 9);
		
		return resultado;
	
	
	
	}



int main(int argc, char **argv)
{


	float x;
	
	scanf("%f",&x);
	printf("%f", converter(x));

	
	return 0;
}

