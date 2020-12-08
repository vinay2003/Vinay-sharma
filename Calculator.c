#include<stdio.h>
#include<conio.h>

void main()
{
int n1, n2, choices;
printf("Please Enter the first number =\n");
scanf("%d", &n1);
printf("Please Enter the sceond number =\n");
scanf("%d", &n2);
printf("choice\n If you want to add press 1\n If you want to sub press 2\n If you want to multply press 3\n If you want to divide press 4\n");
printf("Enter the choice =\n");
scanf("%d", &choices);
switch(choices)
{
case 1:
printf("user choices Addition\n");
printf("%d",n1+n2);
break;

case 2:
printf("user choices Subtraction\n");
printf("%d",n1-n2);
break;

case 3:
printf("user choices Multiplication\n");
printf("%d",n1*n2);
break;

case 4:
printf("user choices Division\n");
printf("%d",n1/n2);
break;

default:
printf("error");
}
}
