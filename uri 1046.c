#include<stdio.h>
int main(){
	int a,b,c,d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
if(a==c && b==d)
printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 24,b-d);
else if(a==c && b>d)
printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 24-1, 60-b+d);
else if((a>c && b==d) || (a>c && d>b))
printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 24-a+c, d-b);	
	
	
	return 0;
}