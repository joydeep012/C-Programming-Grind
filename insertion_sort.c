#include<stdio.h>
void in_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        printf(" ");
    }
}
int main(){
    int arr[]={9,7,5,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    in_sort(arr,n);
    print(arr,n);
    return 0;
}
