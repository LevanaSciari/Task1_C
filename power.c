#include"myMath.h"

double pow(double x , int y){

 if (y==1)
 return x;

 if(y==0)
 return 1;

if (y>1){
   
double result=1;
 for (int i = 0; i < y; i++)
 {
    result=result*x;
 }

 return result;
}
return 0;

}


double exp(int x){
    
return pow(2.718,x);
}