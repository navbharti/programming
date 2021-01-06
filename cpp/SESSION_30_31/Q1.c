/*
1. Students are asked to Implement a C program to find length of a string without using library function strlen()
*/
#include<stdio.h>
int main(){
    char string[200];
    scanf("%[^\n]s", string);
    int len=0; 
    for(int i=0; string[i]!='\0'; i++)
        {
            len++;
        }
        printf("String Lendth: %d\n", len);
    return 0;
}