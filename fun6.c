#include <stdio.h>

int main()
{
    int a=20,b,c,d,k;
    b=(a++)+(a++);
    // printf("b is %d ",b);
    // printf("abhi a is %d \n",a);
    c=(++a)+(++a);
    printf("c is %d ",c);
    // printf("abhi a is %d \n",a);
    // d=(++a)+(a++);
    // printf("d is %d ",d);
    // printf("abhi a is %d \n",a);
    // k=(b+=a);
    // printf("%d\n",k);
    // printf("%d\n",b);
    // printf("%d\n",c);
    // printf("%d\n",d);
    // printf("%d\n%d\n%d\n%d",a,b,c,d);

    return 0;
}