#include<stdio.h>
#include<stdlib.h>


float **sum_m(float **A, float **B, int n)
{
    float **C=(float**)malloc(sizeof(float*)*n);
    for (int i=0 ; i<n ; i++ ){
        C[i]=(float*)malloc(sizeof(float)*n);
        for (int j=0 ; j<n ; j++)
            C[i][j]=A[i][j]+B[i][j];
    }
    return C;


    
}

float **mult_m(float **A, float **B, int n)
{
    float **C=(float**)malloc(sizeof(float*)*n);
    
    int i,j,k; 
    for (i=0 ; i<n;i++){
        C[i]=(float*)malloc(sizeof(float)*n);
        for (j=0 ; j<n ; j++){
            for (k=0 ; k<n ; k++)
                C[i][j]+=A[j][k]+B[k][j];
        }
    }
    return C;
    
}

float **trans_m(float **A, int n)
{
    int i,j;
    float **C=(float**)malloc(sizeof(float*)*n);
    for ( i=0 ; i<n ; i++ ){
        C[i]=(float*)malloc(sizeof(float)*n);
        for ( j=0 ; j<n ; j++)
            C[i][j]=A[j][i];
    }
    return C;
            
}

float **dia_m(float **A, int n)
{
    int i, j;
    float **C=(float**)malloc(sizeof(float*)*2);
    for ( i=0 ; i<2 ; i++ )
        C[i]=(float*)malloc(sizeof(float)*n);
    for ( j=0 ; j<n ; j++)
    {
            C[0][j]=A[j][j];
            C[1][j]=A[j][n-j-1]
    }
    return C;

        
    
}
