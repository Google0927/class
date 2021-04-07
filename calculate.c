#include<stdio.h>
int add(int a, int b){
    return a + b;
};
int sub(int a, int b){
    return a - b;
};
int mul(int a, int b){
    return a * b;
};
int div(int a, int b){
    return a / b;
};
int main(void){
    int a, b, c;
    printf("----start----\n");
    while(1){
        printf("which calculation do you want to do?\n");
        printf("1. addition\n");
        printf("2. subtraction\n");
        printf("3. multipication\n");
        printf("4. division\n");
        printf("5. finish the program\n");
        printf("puts number:"); scanf("%d", &a);
        if(a == 1){
            printf("enter the two numbers you want to add\n");
            scanf("%d", &a);
            printf("+\n");
            scanf("%d", &b);
            c = add(a, b);
            printf("= %d\n", c);
        }
        else if(a == 2){
            printf("enter the two numbers you want to subtraction\n");
            scanf("%d", &a);
            printf("-\n");
            scanf("%d", &b);
            c = sub(a, b);
            printf("= %d\n", c);
        }
        else if(a == 3){
            printf("enter the two numbers you want to multipication\n");
            scanf("%d", &a);
            printf("*\n");
            scanf("%d", &b);
            c = mul(a, b);
            printf("= %d\n", c);
        }
        else if(a == 4){
            printf("enter the two numbers you want to division\n");
            scanf("%d", &a);
            printf("/\n");
            scanf("%d", &b);
            c = div(a, b);
            printf("= %d\n", c);
        }
        else if(a == 5){
            printf("---end---");
            return 0;
        }
    }
}