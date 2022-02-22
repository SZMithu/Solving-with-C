#include<stdio.h>
int main() {

int i;
int j; 
for (i=0; i<5; i++)
{
for (j=0; j<=i; j++)
{
    printf("*");
}
for (j=9; j>=i; j=i-j)
{
    printf(" ");
}
for (j=i; j<=4; j++)
{
    printf("*");
}
printf("\n");
}
    return 0;
}