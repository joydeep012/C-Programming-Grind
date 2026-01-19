#include<stdio.h>
#include<stdlib.h>
struct student{
    int roll_no;
    float marks;
};
int main(){
    struct student s1;
    printf("enter the roll no :");
    scanf("%d",&s1.roll_no);
    printf("enter your marks : ");
    scanf("%f",&s1.marks);
        printf("student info : roll_no :%d,marks %.2f \n",s1.roll_no,s1.marks);
    
    return 0;
}
