#include<stdio.h>
#include"myMath.h"


double f1(double x){
return sub(add(Exp((int)(x)),Pow(x,3)),2);
}

double f2(double x){
    return add(mul(x,3),mul(Pow(x,2),2));
}
double f3(double x){
    return sub(div(mul(Pow(x,3),4),5),mul(x,2));
}

int main(int argc, char const *argv[])
{
double x ;
printf("\n Please inset a real number :\n ");
scanf("%lf",&x);



printf ("\n number :%lf ",x);

printf("\nThe value of f(x)=e^x+x^3−2 at the point %.4f is: %.4f ",x, f1(x));
 
printf("\nThe value of f(x)=3x+2x^2 at the point %.4f is: %.4f ",x,f2(x));

printf("\nThe value of f(x)=(4x^3)/5-2x at the point %.4f is: %.4f\n",x,f3(x));

    return 0;
}
