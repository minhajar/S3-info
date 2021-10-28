#include<stdio.h>
#include<stdlib.h>


void print_nth_byte(int m, int n)
{
    m=m>>(8*(n-1));
    int c;
    for ( c=7 ;c>=0;c--)
        if ((m >> c) & 1)
        {
            printf("1");
        }
        else{
            printf("0");
        }
    return ;
    

}