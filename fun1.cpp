#include <iostream>
int main(){
    for (int j=5; j>0; j--){
        for(int i=0; i<j; i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}