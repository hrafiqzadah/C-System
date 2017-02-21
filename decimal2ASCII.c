#include <stdio.h>

/* Simple Program to Print out a ASCII Value
   from given Decimal Values
   */
   
int main(int argc, char** argv[]){

int i=33;

while(i<=126){

	printf("Decimal = %d Has an ASCII Character = %c\n", i,i);
	i++;
}
return 0;
}

