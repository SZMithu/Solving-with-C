#include<stdio.h>
#include<math.h>
int main()
 {
 double a, b, c, pr1;
 double R1, R2;
 scanf("%lf %lf %lf", &a, &b, &c);
 pr1 = (b*b) - (4*a*c);
 if(pr1 > 0 && a != 0){
 pr1 = sqrt(pr1);
 R1 = (-b+pr1)/(2*a);
 R2 = (-b-pr1)/(2*a);
 printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
 }
 else{
	 printf("Impossivel calcular\n");
 }

  return 0;
 
}