#include <stdio.h>
int main()
{
    double basic_salary, sales, gross_remuneration;
    char city;

    printf("Enter the Basic Salary:");
    scanf("%lf",&basic_salary);

    printf("Enter the Monthly Sales(in Rs):");
    scanf("%lf",&sales);

    printf("Enter the City(C for Colombo,any other character for other cities):");
    scanf("%c",&city);

    double additional_allowance = 0.0;
    printf("Enter the Year of service:");
    int year_of_service;
    scanf("%d",&year_of_service);
    if(year_of_service>5)
    {
        additional_allowance=0.1*basic_salary;
    }
    if(city=='C')
    {
        additional_allowance+=2500.0;
    }
    double bonus_percentage;
    if (sales>=50000)
    {
        bonus_percentage=0.15;
    }
    else if(sales>=25000)
    {
        bonus_percentage=0.12;
    }
    else
    {
        bonus_percentage=0.10;
    }
    double bonus=bonus_percentage*sales;
    gross_remuneration=basic_salary+additional_allowance+bonus;
    printf("Gorss Monthly Remuneration:Rs. %.2f\n",gross_remuneration);
}



 char Colombo;
 printf("Enter the Basic Salary=");
 scanf("%d", &salary);
 printf("Enter the Worked Years=");
 scanf("%d", &years);
 printf("Enter the City=");
 scanf("%d", &city);

 city=Colombo;


}
