#include<stdio.h>
int main()
{
int num1,num2;
printf("Enter the first number");
scanf("%d",&num1);
printf("Enter the second number");
scanf("%",&num2);
if (num1% num2==0)
{printf("%d is a multiple of %d\n",num1,num2);
}else{printf("%d is not a multiple of %d\n",num1,num2);}
return 0;
}

