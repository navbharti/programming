/*
2. Students are asked to Implement a C program to find add a string to the end of another string without using library function strcat()
*/
#include<stdio.h>
int main(){
    char str1[200], str2[200];
    scanf("%[^\n]s", str1);
    scanf(" %[^\n]s", str2);
    printf("%s\n%s", str1, str2);
    int len=0;
    for(int i=0; str1[i]!='\0'; i++)
        {
            len++;
        }
    for(int i=0; str2[i]!='\0'; i++)
    {
        str1[len] =  str2[i];
        len++;
    }
    //str1[len]='\0';
    printf("Concatenated String: %s\n", str1);

    return 0;
}