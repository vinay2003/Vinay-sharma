#include<stdio.h>
#include<conio.h>
void main()
{
int n, i, c, j;
printf("Enter the number\n");
scanf("%d", &n);
printf("The prime number upto %d are\n",n);
for(i=1, i<=n, i++)
{
c=0;
for(j=1, j<=n, j++)
{
if(i%j==0)
{
c++;
}
}
if(c==2)
{
printf("%d\n",i);
}
}
}
