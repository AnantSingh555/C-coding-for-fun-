//progam for greatest common divisor 
#include<stdio.h>
int GCD(int a, int b);
int main(){
    int num1, num2;
    printf("Enter the first number :");
    scanf("%d", &num1);
    printf("Enter the second number :");
    scanf("%d", &num2);
    printf("The greatest common divisor of %d and %d is %d", num1, num2, GCD(num1, num2));
}
int GCD(int a, int b){
    int gr=1;
    if (a>b){
        for (int i=2; i<a; i++){
            if ((a%i==0) && (b%i==0)){
                gr=i;
            }
        }
    }
    else{
        for(int j=2; j<b; j++){
            if ((a%j==0) && (b%j==0)){
                gr=j;
            }
        }
    }
    return gr;
}