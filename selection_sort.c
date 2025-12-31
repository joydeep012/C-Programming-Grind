#include<stdio.h>
void sel_sort(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        int si=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[si]){
                si=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[si];
        arr[si]=temp;
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        printf(" ");
    }
}
int main(){
    int arr[]={29,10,14,37,13};
    int n=sizeof(arr)/sizeof(arr[0]);
    sel_sort(arr,n);
    print(arr,n);
    return 0;
}
