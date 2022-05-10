#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr;
    ++*p;
    p += 2;
    printf("%d\n", *p);
    for(int i=0; i<5; i++)
        printf("%d\t", arr[i]);
    return 0;
}
