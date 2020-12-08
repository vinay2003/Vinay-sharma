#include<stdio.h>
void main()
{
char ch;
printf("Please Enter the ch=");
scanf("%c", &ch);

if(ch>=65 && ch<=90)
{
printf("This is Capital letter");
}
else
if(ch>=91 && ch<=122)
{
printf("This is not Capital letter");
}
}