#include<stdio.h>
#include<stdlib.h>
int main(){
    
    double **A=(double **)malloc(10*sizeof(double *));
    for(int i=0;i<10;i++){
        *(A+i)=(double *)malloc(100*sizeof(double));
    }
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            scanf("%f",(*(A+i)+j));
        }
    }
    double sum=0;
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            sum+=*(*(A+i)+j);
        }
    }
}