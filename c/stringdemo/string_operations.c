#include<stdio.h>

//string operations
int length(char str[]);
int isAlpha(char ch);
int isUpper(char ch);
int isUpperStr(char str[]);
int isLower(char ch);
int isLowerStr(char str[]);
int isDigit(char st);
int isAlphaNum(char ch);
int main()
{
    char text[100];
    printf("\nEnter your string here: ");
    scanf("%[^\n]s", text);
    printf("Length of your string is %d\n", length(text));
    printf("isAlpha(\'a\'): %d\n", isAlpha('a'));
    printf("isAlpha(\'A\'): %d\n", isAlpha('A'));
    printf("isDigit(\'6\'): %d\n", isDigit('6'));
    printf("isUpper(\'A\'): %d\n", isUpper('A'));
    printf("isLower(\'b\'): %d\n", isLower('b'));
    printf("isAlphaNum(\'A\'): %d\n", isAlphaNum('A'));


    return 0;
}

//finds number of characters in the given string str
int length(char str[])
{
    int count = 0;
    for(int i=0; str[i]!='\0'; i++)
        count++;

    return count;
}

//returns 1 if given character is Alphabet, otherwise returns 0
int isAlpha(char ch)
{
    if(isUpper(ch) || isLower(ch))
        return 1;
    return 0;
}

//returns 1 if given character is in Upper Case, otherwise return 0
int isUpper(char ch)
{
    if(ch >= 'A' && ch<='Z')
        return 1;
    return 0;
}

//return 1 if given string contains only Upper Case Alphabets, otherwise return 0
int isUpperStr(char str[])
{

    return 0;
}

//returns 1 if given character is Lower case character, otherwise returns 0
int isLower(char ch)
{
    if(ch >='a' && ch<='z')
        return 1;
    return 0;
}

//return 1 if given string contains only lower case alphabets, otherwise return 0
int isLowerStr(char str[])
{
    return 0;
}

//returns 1 if given character is a digit character [0-9], otherwise return 0
int isDigit(char ch)
{
    if(ch>='0' && ch<='9')
        return 1;
    return 0;
}

//returs 1 if given character is either alphabets or digits character, otherwise returns 0
int isAlphaNum(char ch)
{
    if(isAlpha(ch) || isDigit(ch))
        return 1;
    return 0;
}
