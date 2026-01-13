#include<stdio.h>
#include<string.h>
void rev_str(char *str){
    int len=strlen(str);
    char *start=str;
    char *end=str+len-1;
    char temp;
    while(start<end){
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}
int main(){
    char arr[100];
    printf("enter a word : ");
    fgets(arr,sizeof(arr),stdin);
    size_t len = strlen(arr);
    if (len > 0 && arr[len-1] == '\n') {
        arr[len-1] = '\0';}
    rev_str(arr);
    printf("reversed : %s",arr);
    return 0;
}
