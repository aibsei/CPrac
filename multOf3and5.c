#include <stdio.h>


int main(){
	int x = 0, sum = 0,temp =0;

	for(; x < 1000; x++){
		temp = (x % 3)||( x % 5);
		if(temp == 0){
		sum += x;
		}else;
	}
	
	printf("\n%d\n", sum);


}
