#include<stdio.h>
int main(){
    int a[3][3];
    int b[3][3];
    int c[3][3];
    char buffer[100];
    printf("enter the elements for Matrix A :\n ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("enter the element a[%d][%d]\n",i,j);
            if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
    sscanf(buffer, "%d", &a[i][j]); 
        }
    }}
    printf("enter the elements for Matrix B :\n ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("enter the element b[%d][%d]\n",i,j);
            if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
    sscanf(buffer, "%d", &b[i][j]); 
        }
    }}
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("sum of the two matrix : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d",c[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
