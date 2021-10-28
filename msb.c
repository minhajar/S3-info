#include<stdio.h>
#include<stdlib.h>




void check_msb(int num)
{

    
   
    if( (num>>31) & 1 )
        printf("msb is set(1)");
    else
        printf("msb is not set(0)");

     //(num>>31) ? printf (.....) :(......)  
}


    


int main()
{
    
    check_msb(2);
    return 0;
}