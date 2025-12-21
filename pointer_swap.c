#include<stdio.h>
void swap(int *n1,int *n2){
    int c=*n1;
    *n1=*n2;
    *n2=c;
}
int main(){
    int a=10,b=20;
    swap(&a,&b);
    printf("value of a is : %d \n",a);
    printf("value of b is : %d",b);
    return 0;
    
}
