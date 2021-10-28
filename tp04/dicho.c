#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float *fct(float x)
{
    return 2*pow(x,2)-4;

}

float Dichotomie(float(*f)(float), float a, float b, int n);
{
    
    
    float x;
    x=(a+b)/2;
    for (int i=0;i<n; i++ ){
        if((f(a)*f(x) < 0)
            x=b;
        if((f(a)*f(x) > 0)
            x=a;
        x=(a+b)/2
    }
    return x;
}

int main()
{
    float x = Dichotomie(fct,0,4,100);
    printf()
}
