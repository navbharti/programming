#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int reg_arr[n];
    int even_reg=0, odd_reg=0;
    for(int i=0; i<n; i++){
        scanf("%d", &reg_arr[i]);
        if(reg_arr[i]%2)
            odd_reg++;
        else
            even_reg++;
    }
    printf("%d %d", even_reg, odd_reg);
    return 0;
}