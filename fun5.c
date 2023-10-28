// find minimum element in an array
#include<stdio.h>
int main(){
    int arr[]={2,6,4,7,8,4,1};
    for(int i=0; i<7; i++)
    {
        for(int j=i+1; j<7; j++){
            if (arr[i]>arr[j])
            {
                int a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
        }
    }
    printf("The smallest element of the array is %d",arr[0]);
    return 0;
}