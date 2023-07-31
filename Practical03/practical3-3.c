#include<stdio.h>
int main()
{
char employeename;
float basicsalary,newsalary,increment;
printf("Enter employee name:");
scanf("%s",&employeename);
printf("Enter basic salary:");
scanf("%f",&basicsalary);
if(basicsalary<5000)
increment=basicsalary*0.05;
else if(basicsalary>=5000)
increment=basicsalary*0.1;
else if(basicsalary<10000)
increment=basicsalary*0,1;
else
increment=basicsalary*0.15;
newsalary=basicsalary+ increment;
printf("Employee name:%s\n",employeename);
printf("New salary:%2f\n",newsalary);
return 0;
}
