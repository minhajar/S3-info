#include<stdio.h>
#include<stdlib.h>

void print_bits(unsigned char byte)
{
    int c;
    for ( c=7 ;c>=0;c--)
        if ((byte >> c) & 1)
        {
            printf("1");
        }
        else{
            printf("0");
        }
    return ;
        
}