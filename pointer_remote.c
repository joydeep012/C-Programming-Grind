#include<stdio.h>
int main(){
    int a=100;
    int *ptr=&a;
    *ptr=500;
    printf("new value : %d",a);
    return 0;
}
