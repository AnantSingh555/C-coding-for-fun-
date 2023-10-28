#include<stdio.h>
int main(){
    int a,b;
    int *p;
    a=5;
    p=&a;
    printf("%d\n",p);
    printf("%d",*p);
    return 0;
}
