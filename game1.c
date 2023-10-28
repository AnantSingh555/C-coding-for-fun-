// odd even cricket game
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
// void game_start(void);
int main(){
    char ch[15];
    char res;
    char ch2[20];
    printf("What do you chose odd or even-->\n");
    scanf("%s", &ch);
    srand(time(0));
    int com_num1=rand() % 6 + 1;
    // printf("%d", num);
    int usr_num1;
    printf("Enter number :");
    scanf("%d", &usr_num1);
    int sum=0;
    sum= com_num1 + usr_num1;
    if (sum % 2==1){
        char res[] ="odd";
    }
    else{
        char res[] ="even";
    }
    if (res==ch){
        printf("You won the toss !!\n");
        printf("What do you choose batting or bowling -->");
        scanf("%s", &ch2);
        if (ch2=="batting"){
            // game_start();
            int usr_score1=0, com_num2, usr_num2;
            while(com_num2!=usr_num2){
                srand(time(0));
                com_num2=rand() % 6 + 1;
                printf("Enter number :");
                scanf("%d", &usr_num2);
                usr_score1+=usr_num2;
            }
            printf("Oops, You got out !!\n");
            printf("Your total score this innings was %d\n", &usr_score1);
            printf("Now, its your turn to bowl. Defend your target !!\n");
            int com_score1=0, com_num3, usr_num3;
            while(com_num3 != usr_num3){
                srand(time(0));
                com_num3=rand()%6 + 1;
                printf("Enter number :");
                scanf("%d", &usr_num3);
                com_score1+=com_num3;
                if (com_score1>usr_score1){
                    printf("You lost !! You failed to defend your target !!\n");
                }
            }
            if (com_score1<usr_score1){
                int diff1=usr_score1-com_score1;
                printf("You won by %d runs !! You successfully defended your target !!\n", diff1);
            }
        }
        else{
            int com_score2=0, com_num4, usr_num4;
            while(com_num4 != usr_num4){
                srand(time(0));
                com_num4=rand()%6 + 1;
                printf("Enter number :");
                scanf("%d", &usr_num4);
                com_score2+=com_num4;
            }
            printf("The computer got out !!\n");
            printf("Get ready to bat !! You get a target of %d\n", com_score2);
            int usr_score2=0, com_num5, usr_num5;
            while(com_num5 != usr_num5){
                srand(time(0));
                com_num5=rand() % 6 + 1;
                printf("Enter number :");
                scanf("%d", &usr_num5);
                usr_score2+=usr_num5;
            }
            if (usr_score2>com_score2){
                printf("You won !! You chased down the target !!\n");
            }
            else{
                int diff2=com_score2-usr_score2;
                printf("You lost by %d runs !!\n",diff2);
            }
        }
    }
    else{
        char com_ch;
        srand(time(0));
        int a=rand()%100 +1;
        if (a<50){
            char com_ch[]="Batting";
        }
        else{
            char com_ch[]="Bowling";
        }
        if (com_ch=="Bowling"){
            printf("The computer chose %s\n", com_ch);
            printf("Get ready to bat !!\n");
            int usr_score3=0, com_num6, usr_num6;
            while(com_num6!=usr_num6){
                srand(time(0));
                com_num6=rand() % 6 + 1;
                printf("Enter number :");
                scanf("%d", &usr_num6);
                usr_score3+=usr_num6;
            }
            printf("Oops, You got out !!\n");
            printf("Your total score this innings was %d\n", &usr_score3);
            printf("Now, its your turn to bowl. Defend your target !!\n");
            int com_score3=0, com_num7, usr_num7;
            while(com_num7 != usr_num7){
                srand(time(0));
                com_num7=rand()%6 + 1;
                printf("Enter number :");
                scanf("%d", &usr_num7);
                com_score3+=com_num7;
                if (com_score3>usr_score3){
                    printf("You lost !! You failed to defend your target !!\n");
                }
            }
            if (com_score3<usr_score3){
                int diff3=usr_score3-com_score3;
                printf("You won by %d runs !! You successfully defended your target !!\n", diff3);
            }
        }
        else{
            printf("The computer chose %s\n", com_ch);
            printf("Get ready to bowl !!\n");
            int com_score4=0, com_num8, usr_num8;
            while(com_num8 != usr_num8){
                srand(time(0));
                com_num8=rand()%6 + 1;
                printf("Enter number :");
                scanf("%d", &usr_num8);
                com_score4+=com_num8;
            }
            printf("The computer got out !!\n");
            printf("Get ready to bat !! You get a target of %d\n", com_score4);
            int usr_score4=0, com_num9, usr_num9;
            while(com_num9 != usr_num9){
                srand(time(0));
                com_num9=rand() % 6 + 1;
                printf("Enter number :");
                scanf("%d", &usr_num9);
                usr_score4+=usr_num9;
            }
            if (usr_score4>com_score4){
                printf("You won !! You chased down the target !!\n");
            }
            else{
                int diff4=com_score4-usr_score4;
                printf("You lost by %d runs !!\n",diff4);
            }
        }
    }
    return 0;
}
// void game_start(){
//     srand(time(0));
//     int com_num=rand() % 6 + 1;
//     int usr_num;
//     printf("Enter number :");
//     scanf("%d", &usr_num);

