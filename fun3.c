//sorting array
#include<stdio.h>
int main(){
    int arr[]={2,5,4,1};
    int *ptr;
    ptr=arr;
    printf("The array is : ");
    for(int q=0; q<4; q++)
    {
        printf("%d ",arr[q]);
    }
    printf("\n");
    for(int i=0; i<4; i++)
    {
        for(int j=i+1; j<4; j++)
        {
            if (arr[i]<arr[j])
            {
                int a =arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
        }
    }
    printf("The array in ascending order is : ");
    for(int c=0; c<4; c++)
    {
        printf("%d ", arr[c]);
    }
    return 0;
}