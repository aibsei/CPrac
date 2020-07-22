#include <stdio.h>

int main(){
	
	// for now, we want to see how to get Fib
	static int a = 0;	// inits to 0 if not spec. static property
	static int b = 1;
	static int c;
	
	int i = 0;

	// int sum1 = 1;
	// int sum2 = 0;

	for(i = 0; i < 10; i++ ){	// change to sum2 later on
		
		// find c
		// switch b to a
		// switch c to b

		// find c
		c = a + b;
		
		//print and check 		
  		printf("%d\t%d\t%d\n", a, b, c);

		// switchero
		a = b;
		b = c;
	}		

	return 0;

}
