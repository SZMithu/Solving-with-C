#include<stdio.h>
#include<math.h>
#define PI 3.14159
const double SQUARED = 2.0;
int main(){
double R;
double A;
scanf("%lf", &R);
A = PI*pow(R, SQUARED);
	printf("A=%.4lf\n", A);

return 0;
}