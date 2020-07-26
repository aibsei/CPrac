#include <stdio.h>

// return type should be pointer to int fx
// keep void for now
void twoSum(int *, int , int, int *);

//#define numsSize 4

int main(){

	int numsSize = 4;
	int nums[4] = {2, 15, 11, 7};
	int *numPtr = &nums[4];
	int target = 9;
	int returnSize[2] = {};
	int *retPtr = &returnSize[2];

	twoSum(numPtr, numsSize, target, retPtr);

	printf("\n%d\n%d",returnSize[1],returnSize[2]);

	return 0;

}


// return type should be pointer to int fx
void twoSum(int * nums, int numsSize, int target, int * returnSize){
	
	int scan1,scan2,temp = 0;

	for(scan1 = 0; scan1 < numsSize; scan1++){
		scan2 = scan1 + 1;
		for(; scan2 < numsSize; scan2++){
			if(temp == target){
				returnSize[1] = scan1;
				returnSize[2]  = scan2;
			}
			else;
		}
	}

}
