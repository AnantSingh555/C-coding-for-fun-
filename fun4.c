//search an element in an array
#include<stdio.h>
int main(){
    int arr[]={6,2,7,8,9};
    int srch_elmnt, flag=0;
    printf("Enter the number you want to search in the array : ");
    scanf("%d",&srch_elmnt);
    for(int i=0; i<5; i++)
    {
        if (arr[i]==srch_elmnt)
        {
            flag=1;
            break;
        }
        
    }
    if (flag==1)
    {
        printf("Entered element is found in the array !!");
    }
    else 
    {
        printf("Entered element is not found in the array !!");
    }
    return 0;
}