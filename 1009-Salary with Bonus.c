#include<stdio.h>
int main()
{
    char name[10];
    scanf("%s",&name);
    double salary,sold,TOTAL;
    scanf("%lf%lf",&salary,&sold);
    TOTAL=((sold*15)/100)+salary;
    printf("TOTAL = R$ %.2lf\n",TOTAL);


           return 0;
}