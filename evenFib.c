#include <stdio.h>

int main(){
	
	// for now, we want to see how to get Fib
	static int a = 0;	// inits to 0 if not spec. static property
	static int b = 1;
	static int c;
	
	int i = 0;

	static int sum1 = 0;
	// int sum2 = 0;

	for(i = 0; c < 4000000; i++ ){	// change to sum2 later on
		
		// find c
		// switch b to a
		// switch c to b

		// find c
		c = a + b;

		// even valued terms sum
		c % 2 ?: (sum1 += c);
		

		//print and check 		
  		printf("%d\t%d\t%d\t%d\n", a, b, c, sum1);
	

		// switchero
		a = b;
		b = c;
	}		

	return 0;

}
