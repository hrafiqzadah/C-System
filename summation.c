#include <stdio.h>
#include <stdlib.h>

/* This Program Takes the First Digit 
   Last Digit of a Given Input and
   Gives a Total of the Digits
   */
int main(){

int input = 0;
int total;
int first, last;

printf("Please Enter a Number\n");
scanf("%d", &input);
printf("Ok You Entered: %d\n", input);

first = input;

if(input >= 10){
	last = input % 10;
}else{
        last = 0;
}

while(first >= 10){
	first /= 10;
}

total = first + last;

printf("First Digit = %d\nLast Digit = %d\nTotal = %d\n", first,last,total);

return 0;
}

