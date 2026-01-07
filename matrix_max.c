#include<stdio.h>
#include<limits.h>
#define size 3
int main(){
    int max=INT_MIN;
    int a[size][size];
    char buffer[100];
    printf("enter the elements for Matrix a[%d][%d] : \n",size,size);
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("enter the elements a[%d][%d] : ",i,j);
            if(fgets(buffer,sizeof(buffer),stdin)!=NULL){
                sscanf(buffer,"%d",&a[i][j]);}
        }
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(max<=a[i][j]){
                max=a[i][j];
            }
        }
    }
    printf("the max no of the matrix is : %d",max);
    return 0;
}