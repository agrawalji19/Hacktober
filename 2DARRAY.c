#include<stdio.h>

int main(){
    int row,column,n;
    printf("Enter the number of Rows=");
    scanf("%d",&row);
    printf("Enter the number of columns=");
    scanf("%d",&column);
    int matrix[row][column];
    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            printf("Enter the [%d][%d] element=",i,j);
            scanf("%d",&n);
            matrix[i][j]=n;
        }
    }
    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}