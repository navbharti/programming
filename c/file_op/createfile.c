#include<stdio.h>
int main()
{
    FILE *f;
    f = fopen("text.txt", "w");
    fprintf(f, "%s", "Welcome");

    fclose(f);

    return 0;
}