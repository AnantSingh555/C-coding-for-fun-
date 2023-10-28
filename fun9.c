#include<stdio.h>
int main(){
    struct stud{
        int roll_no;
        char name[30];
        int marks;
    };
    int r, n, m;
    printf("Enter the roll no. of the student-->");
    scanf("%d", &r);
    printf("Enter the name of the student-->");
    scanf("%d", &n);
    printf("Enter the marks of the student-->");
    scanf("%d", &m);
    return 0;
}