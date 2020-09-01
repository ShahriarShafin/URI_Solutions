#include<stdio.h>
int main()
{
    int R;
    double VOLUME;
    scanf("%d",&R);
    VOLUME=(4/3.0)*3.14159*((double)R*(double)R*(double)R);
    printf("VOLUME = %.3lf\n",VOLUME);

    return 0;
}