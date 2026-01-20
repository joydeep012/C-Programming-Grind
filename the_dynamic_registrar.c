#include<stdio.h>
#include<stdlib.h>
struct student{
    char name[50];
    int roll;
};
int main(){
    int n;
    printf("Enter the no of students : ");
    scanf("%d",&n);
    struct student *list=(struct student*)malloc(n*sizeof(struct student));
    if (list == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for(int i=0;i<n;i++){
        printf("enter the name for student %d : ",i+1);
        scanf("%s",list[i].name);
        printf("enter the roll no : ");
        scanf("%d",&list[i].roll);
    }
    printf("\n----STUDENT REGISTRY----\n");
    for(int i=0;i<n;i++){
        printf("ID : %d | NAME :%s\n",list[i].roll,list[i].name);
    }
    free(list);
    return 0;
    
}
