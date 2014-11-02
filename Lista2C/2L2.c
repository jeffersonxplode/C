
#include <stdio.h>


void ordem(int a, int b, int c){
	
	
	if (a > b && a > c) {
		
			if ( b > c) {
				
				printf("%d \n", c);
				printf("%d \n", b);
				printf("%d \n", a);
				
				}
			else {
				
				printf("%d \n", b);
				printf("%d \n", c);
				printf("%d \n", a);
				}
		
	}
	
	else if (b > a && b > c) {
		
			if ( a > c) {
				
				printf("%d \n", c);
				printf("%d \n", a);
				printf("%d \n", b);
				
				}
			else {
				
				printf("%d \n", a);
				printf("%d \n", c);
				printf("%d \n", b);
				}
		
	}
		
	
	else if (c > a && c > b) {
		
			if ( b > a) {
				
				printf("%d \n", a);
				printf("%d \n", b);
				printf("%d \n", c);
				
				}
			else {
				
				printf("%d \n", b);
				printf("%d \n", a);
				printf("%d \n", c);
				}
		
	}
	
	
}


int main(int argc, char **argv)
{
	
	int x,y,z;
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);

	ordem(x,y,z);
	
	
	return 0;
}

