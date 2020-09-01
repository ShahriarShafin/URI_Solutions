#include<stdio.h>
int main()
{

    float A,B,C;
    scanf("%f%f%f",&A,&B,&C);
    double a,b,c,d,e;
    a=(1.0/2)*A*C;
    b=(3.14159*(C*C));
    c=((A+B)*C)/2;
    d=B*B;
    e=A*B;

    printf("TRIANGULO: %.3lf\n",a);
    printf("CIRCULO: %.3lf\n",b);
    printf("TRAPEZIO: %.3lf\n",c);
    printf("QUADRADO: %.3lf\n",d);
    printf("RETANGULO: %.3lf\n",e);



    return 0;
}