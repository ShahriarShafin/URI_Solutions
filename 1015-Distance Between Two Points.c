#include<stdio.h>
int main()
{

    double x2,x1,y2,y1,sum1,sum2,sum3,sum4,sum5,sum6;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);

    sum1=x2-x1;
    sum2=y2-y1;
    sum3=sum1*sum1;
    sum4=sum2*sum2;
    sum5=sqrt(sum3+sum4);
    printf("%.4lf\n",sum5);

    return 0;
}