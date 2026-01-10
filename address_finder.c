#include<stdio.h>
int main(){
    int a;
    char b;
    float c;
    printf("enter an integer : ");
    scanf("%d",&a);
    printf("enter a character : ");
    scanf(" %c",&b);
    printf("enter a float no : ");
    scanf("%f",&c);
    
    printf("address of the integer : %p\n",(void*)&a);
    printf("address of the character : %p \n",(void*)&b);
    printf("address of the float : %p \n",(void*)&c);
    return 0;
}
