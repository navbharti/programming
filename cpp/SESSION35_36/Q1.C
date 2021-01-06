#include<stdio.h>
int main(){
    int num, digit_sum=0, reminder;
    scanf("%d", &num);
    while(num>0){
        reminder = num%10;
        digit_sum = digit_sum + reminder;
        num = num / 10;
    }
    printf("\nDigit Sum = %d", digit_sum);
    return 0;
}