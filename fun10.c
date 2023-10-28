#include<stdio.h>
int main(){
    int arr[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("Enter the value of element arr[%d][%d]-->", i, j);
            scanf("%d", arr[i][j]);
        }
    }
    printf("The lower triangle elements of the matrix are-->");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if (i==j)
            {
                for (int a=0; a<=j; a++)
                {
                    printf("%d ", &arr[i][j]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}