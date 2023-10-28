//average of three numbers
#include <stdio.h>
int avge(int a, int b, int c);
int main(){
    int num1, num2, num3;
    printf("Enter the first number :");
    scanf("%d", &num1);
    printf("Enter the second number :");
    scanf("%d", &num2);
    printf("Enter the third number :");
    scanf("%d", &num3);
    printf("%d", avge(num1, num2, num3));
    return 0;
}
int avge(int a, int b, int c){
    return (a+b+c)/3;
}

// check a number is palindrome or not
#include <stdio.h>
void palindrome(int a);
int main(){
    int num;
    printf("Enter the number to check palindrome :");
    scanf("%d", &num);
    palindrome(num);
    return;
}
void palindrome(int a){
    int original_num=a;
    int rev=0, rem;
    while(a!=0){
        rem=a%10;
        rev=rev*10 + rem;
        a/=10;
    }
    if (original_num==rev){
        printf("The entered number is a palindrome number");
    }
    else{
        printf("The entered number is not a palindrome number");
    }
}

// program to find the sum of the digits of a number 
#include <stdio.h>
int sum_digits(int num);
int main(){
    int a;
    printf("Enter the number :");
    scanf("%d", &a);
    printf("The sum of the digits of the number is : %d", sum_digits(a));
    return 0;
}
int sum_digits(int num){
    int sum=0;
    while (num!=0){
        sum+=num%10;
        num/=10;
    }
    return sum;
}
