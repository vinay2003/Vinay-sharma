//this is the canditional_operator
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,out;
    printf("Enter the first value:\n");
    scanf("%d",&a);
    printf("Enter the second value:\n");
    scanf("%d",&b);
    out=a>b ? a:b;
    printf("%d",out);

}
