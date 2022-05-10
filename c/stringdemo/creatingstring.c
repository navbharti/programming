#include<stdio.h>
int main()
{
    char str1[10] = {'h', 'e', 'l', 'l', 'o'};
    printf("str1: %s\n", str1);
    char str2[10] = "Hello";
    printf("str2: %s\n", str2);
    char str3[]  = "Hello";
    printf("str3: %s\n", str3);
    printf("size of str1: %ld\n", sizeof(str1));
    printf("size of str2: %ld\n", sizeof(str2));
    printf("size of str3: %ld\n", sizeof(str3));
    char *str4 = "Hello";
    printf("str4: %s\n", str4);
    printf("size of str4: %ld\n", sizeof(str4));

    printf("\nEnter your String: ");
    scanf("%s", str1);
    printf("You Entered: %s\n", str1);
    printf("\nEnter your String (including space): ");
    scanf("%*c%[^\n]s", str2);
    printf("You Entered: %s\n", str2);
    return 0;
}

