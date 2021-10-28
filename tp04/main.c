#include<stdio.h>
#include<stdlib.h>

float **sum_m(float **A, float **B, int n);
float **mult_m(float **A, float **B, int n);
float ** trans_m(float **A, int n);
float **dia_m(float **A, int n);



int main()
{
    int n =2;
    
    float **A=(float**)malloc(sizeof(float*)*n);
    float **B=(float**)malloc(sizeof(float*)*n);
    for (int i=0 ; i<n;i++){
        A[i]=(float*)malloc(sizeof(float)*n);
        B[i]=(float*)malloc(sizeof(float)*n);

        for (int j=0 ; j<2 ; j++){
            //printf("%d; %d\n",j,i);
            scanf("%f",&A[i][j]);
            scanf("%f",&B[i][j]);
        }
    }

        float **C=NULL;
        C = sum_m(A,B,n);
        for (int i=0 ; i<n;i++){
            for (int j=0 ; j<n ; j++)
                printf("%f",C[i][j]);
            printf("\n");
        }

        
    return 0;

}
