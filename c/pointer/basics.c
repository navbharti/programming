#include<stdio.h>
void changeValue(int *n)
{
    *n = 100;
}
int main()
{
    const int a = 12;
    int *p;
    p = &a;
    printf("a: %d\n", a);
    *p = 20;
    //a = 30;
    printf("a: %d\n", a);
    printf("a: %d\n", *p);
    printf("Address of a: %p\n", &a);
    printf("Content of p: %p\n", p);
    printf("Value of a: %d\n", a);
    printf("Value at *p: %d\n", *p);  

    char *msg = "Hello";
    printf(msg); 
    int b = 20;
    printf("Before change a: %d\n", b);
    changeValue(&b);
    printf("After change a: %d\n", b);
    return 0;
}