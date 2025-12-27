#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    int l=INT_MIN,s=INT_MIN;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    int a[n];
    if(n<2){
        printf("Minimum requirement for array size is 2.\n");
        return 1;
    }
    else{
        for(int i=0;i<n;i++){
            printf("%d enter the no for the array :",i+1);
            scanf("%d",&a[i]);
            }
        for(int i=0;i<n;i++){
            if(l<a[i]){
                s=l;
                l=a[i];}
            else if(a[i]>s&&a[i]!=l){
                s=a[i];
            }
            
    }
    if(s == INT_MIN){
        printf("All elements are the same.\n");
    } else {
        printf("The second largest number is: %d\n", s);
    }
}return 0;}
