
int euclides (int x, int y){
	
	if (y == 0){
		
			return x;
		
		}
	
	else {
		
		
			return euclides(y, x % y);
		
		}
	
	
	}



#include <stdio.h>

int main(int argc, char **argv)
{
	
	
	int i,n;
	
	
	scanf("%d",&i);
	scanf("%d",&n);
	
	printf("%d", euclides(i,n));
	
	
	return 0;
}

