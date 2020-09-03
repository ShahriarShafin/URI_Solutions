#include<stdio.h>
int main()
{

    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x>y && x>z)
    {
        printf("%d eh o maior\n",x);
    }


    if(y>x && y>z)
    {
        printf("%d eh o maior\n",y);
    }

    if(z>x && z>y)
    {
        printf("%d eh o maior\n",z);
    }


    return 0;
}