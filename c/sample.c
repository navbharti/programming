#include<stdio.h>
int main(){
    int a;
    int b;
    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);
    int sum = a + b;
    printf("Sum %d", sum);
    return 0;
}