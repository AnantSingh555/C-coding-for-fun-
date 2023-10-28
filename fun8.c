#include<stdio.h>
int main(){
    int r, c, trace=0;
    printf("Enter the number of rows of the matrix-->");
    scanf("%d", &r);
    printf("Enter the number of columns of the matrix-->");
    scanf("%d", &c);
    int arr[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("Enter the value of arr[%d][%d]-->", i, j);
            scanf("%d", &arr[i][j]);
            printf("\n");
        }
    }
    printf("The matrix is :\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if (i==j)
            {
                trace+=arr[i][j];
            }
        }
    }
    printf("The trace of the entered matrix is %d",trace);
    return 0;
}