#include <stdio.h>
#include <math.h>

int main(){
	
	double a, b;
	scanf("%lf %lf", &a, &b);
	printf("%.0lf",ceil(a*(b-0.99)));
	
	return 0;
}
