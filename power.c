#include "myMath.h"

double Exp(int x)
{
  	double result =1;
  	for(int i=0; i<x; i++)
  	{
  	      result=result*2.7183;
  	}
  return result;
}

double Pow(double x, int y)
{
	double result= 1;
  	for(int i=0; i<y; i++)
    	{
      	result = result*x;
    	}
    	return result ;
}
