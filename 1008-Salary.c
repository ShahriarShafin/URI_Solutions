#include<stdio.h>
int main()
{
    int employee,hours;
    float amount,SALARY;
    scanf("%d %d %f",&employee,&hours,&amount);
    SALARY=hours*amount;
    printf("NUMBER = %d\n",employee);
    printf("SALARY = U$ %.2f\n",SALARY);

    return 0;
}