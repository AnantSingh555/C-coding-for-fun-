//Adding two matrix
#include<stdio.h>
int main(){
    int arr1[2][2], arr2[2][2];
    printf("For first matrix-->\n");
    for (int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            int var;
            printf("Enter the value of arr1[%d][%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
            printf("\n");
        }
    }
    printf("For second matrix -->\n");
    for (int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            int var;
            printf("Enter the value of arr2[%d][%d] : ", i, j);
            scanf("%d", &arr2[i][j]);
            printf("\n");
        }
    }
    printf("First matrix is -->\n");
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<2; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("Second matrix is -->\n");
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<2; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    //final matrix after sum
    printf("The resultant matrix after sum of first and second matrix is -->\n");
    int arr3[2][2];
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<2; j++)
        {
            // int a,b;
            // a=arr1[i][j];
            // b=arr2[i][j];
            // arr3[i][j]=a+b;
            arr3[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }   
    return 0;
}