#include<stdio.h>
int main(){
	double n1, n2, n3, n4, n5, sum;
	
	scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
	sum = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;
	printf("Media: %.lf\n", sum);
	if (sum >= 7.0){
		printf("Aluno aprovado.\n");
	}
	else if(sum>=5.0)
	{
	printf("Aluno em exame.\n");
	scanf("%lf", &n5);
        printf("Nota do exame: %.1f\n", n5);
	
	if (n5 + sum / 2.0 > 5.0){
            printf("Aluno aprovado.\n");
        }
        else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", (n5 + sum ) / 2.0);
    }
    else{
        printf("Aluno reprovado.\n");
    }
    return 0;
}