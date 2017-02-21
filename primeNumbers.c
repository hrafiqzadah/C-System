#include <stdio.h>
/* This Program Will Create an Array
   from User Specified input and 
   Populate the Array only at Prime Values
   from 0 to given size
   */

int main(int argc, char** argv[]){
int size;
int i;

printf("Please Input the Size of the Array that You Would Like: ");
scanf("%d", &size);

int arr[size];

for( i = 0; i < size; i++ ){
	if( i == 0 || i == 1 )
		arr[i] = 0;
	else if( i % 2 == 0)
		arr[i] = 0;
	else if( i % 3 == 0)
		arr[i] = 0;
	else
		arr[i] = i;
}

printf("\nThese Are Your Prime Numbers:\n");
for( i = 0; i < size; i++ ){
	if(arr[i] != 0)
		printf("Array[ %d ] = %d\n", i , arr[i]);
}


return 0;
}

