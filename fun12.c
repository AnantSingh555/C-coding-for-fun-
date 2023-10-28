
#include <stdio.h>

// int main()
// {
    // int a[5]={5,1,15,20,25};
    // int i, j , m;
    // i=++a[1];
    // j=a[1]++;
    // m=a[i++];
    // printf("%d %d %d ",i,j,m);

    // char p;
    // char buf[10]={1,2,3,4,5,6,9,8};
    // p=(buf+1)[5];
    // printf("%d ", p);
    
    // int arr[10]={1,2,3,4,5};
    // printf("%d",arr[5]);
    
    // int i=5;
    // printf("%d %d %d ", i++, i++, i++);
    
    // #include <stdio.h>
 
// int main()
// {
//     int (*ptr)(int ) = fun;
//     (*ptr)(3);
//     return 0;
// }
 
// int fun(int n)
// {
//   for(;n > 0; n--)
//     printf("Hello ");
//   return 0;
// }


//     return 0;
// }

// void dynamic(int s, ...)
// {
//     printf("%d ", s);
// }
 
// int main()
// {
//     dynamic(2, 4, 6, 8);
//     dynamic(3, 6, 9);
//     return 0;
// }


// int main()
// {
//     void demo();
//     void (*fun)();
//     fun = demo;
//     (*fun)();
//     fun();
//     return 0;
// }
 
// void demo()
// {
//     printf("Quiz ");
// }

// double foo (double); /* Line 1 */
 
// int main()
// {
 
//     double da, db;
 
    
 
//     db = foo(da);
 
// }
 
// double foo(double a)
// {
//     return a;
// }

// void swap ( int x, int y ) 
// { 
// int tmp; 
// tmp = x; 
// x= y; 
// y = tmp;
//  }

// int f(int n)
// {
//  static int i = 1; 
// if(n >= 5) 
// return n; 
// n = n+i; 
// i++; 
// return f(n); 
// }
// int main(){
//     printf("%d", f(1));
// }

int main(void){
    char p;
    char buf[10]={1,2,3,4,5,6,9,8};
    p= (buf + 1)[5];
    printf("%d",p);
    return 0;
}

// int main()
// {
//     int (*ptr)(int ) = fun;
//     (*ptr)(3);
//     return 0;
// }
 
// int fun(int n)
// {
//   for(;n > 0; n--)
//     printf("Hello ");
//   return 0;
// }