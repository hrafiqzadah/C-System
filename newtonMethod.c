#include <stdio.h>
#define DEM 3

/* This Program Uses the Newtons Method
   to Try and Estimate the Distance Between
   Points P and Q in 3-Dimensional Space
   */
   
double sqrRoot(double toRoot);
double square(double num);
int main(int argc, char** argv[]){

	double p, q;

	printf("Please Enter a Number for Distance P: \n");
	scanf("%lf", &p);
	printf("Please Enter a Number for Distance Q: \n");
	scanf("%lf", &q);
	printf("\nCalculating Euclidean Distance for %f and %f in 3 Dimension Space", p , q);

	double distance;
	double diff = 0;
	int i;
	for(i = 0; i < DEM; i++){
		diff = p - q;
		diff = square(diff);
		distance = sqrRoot(diff);
	}

	printf("\nThe Euclidean Distance Between P And Q is: %.3f\n", distance);

return 0;
}

double square(double num){
	return num * num;
}

double sqrRoot(double toRoot){
	double t = toRoot;
	double ret;
	int i = 0;

	ret = (10 + (t / 10))/2;

	while(t > 1000000){
		t = t / 1000000;
		ret = (ret + (toRoot / ret))/2;
	}

	while(i < 6){
		ret = ret - ((square(ret) - toRoot) / (2 * ret));
		i++;
	}
	return ret;
}
