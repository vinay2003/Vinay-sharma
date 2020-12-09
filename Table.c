/* The program below takes an integer input from the user and generates the multiplication tables up to 10. */
#include<stdio.h>
#include<conio.h>
void main()
{
int a,i;
printf("Enter the value:\n");
scanf("%d", &a);
for(i=1;i<10;i++)
printf("%d x %d = %d\n",a,i+1,(i+1)*a);
}
