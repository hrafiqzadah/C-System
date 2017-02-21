#include <stdio.h>
/* This Program will Convert a 
   Given input into a Float Format
   */
double convertFloat(char s[]);

int main(int argc, char** argv[]){

char test[] = "123";
char test2[] = "4.56";
char test3[] = "-7.89";
double num1, num2, num3;

printf("Test = %s. And Converted to Double", test);
num1 = convertFloat(test);
num2 = convertFloat(test2);
num3 = convertFloat(test3);

printf("Test 1 = %f\nTest 2 = %f\nTest 3 = %f\n", num1,num2,num3);
return 0;
}

double convertFloat(char s[]){
float num = 0, sign = 1;
int point_seen;
	if (*s == '-'){
    		s++;
    		sign = -1;
  	}
	for (point_seen = 0; *s; s++){
    		if (*s == '.'){
      			point_seen = 1; 
      			continue;
    		}
		int d = *s - '0';
		if (d >= 0 && d <= 9){
			if (point_seen)
				sign /= 10.0f;
		num = num * 10.0f + (float)d;
    		}
	}
  return num * sign;
}





