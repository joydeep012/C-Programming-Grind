#include<stdio.h>
#include <math.h>
int main(){
    int n,i;
    float l=-INFINITY,s=-INFINITY;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    int a[n];
    if(n<2){
        printf("minimum array size is 2");
    }
    else{
    for(i=0;i<n;i++){
    printf("%d enter the element :  ",i+1);
    scanf("%d",&a[i]);}
    for(i=0;i<n;i++){
        if(a[i]>l){
            s=l;
            l=a[i];
    }
        else if(a[i]>s&&a[i]!=l){
            s=a[i];
    }
    }}
    printf("the second largest value is %d",s);
}
