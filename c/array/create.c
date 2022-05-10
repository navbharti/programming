#include<stdio.h>

int main()
{
    int arr1[5];
    arr1[0] = 10;
    arr1[1] = 20;
    arr1[2] = 30;
    arr1[3] = 40;
    arr1[4] = 50;
    for (int i =0; i<5; i++)
        printf("%d\t", arr1[i]);
    printf("\n");
    printf("Size taken by arr1: %lu", sizeof(arr1));
    printf("\n");
    int arr2[] = {1, 2, 3, 4, 5};
    for (int i =0; i<5; i++)
        printf("%d\t", arr2[i]);
    printf("\n");
    printf("Size taken by arr2: %lu", sizeof(arr2));
    printf("\n");
    int arr3[5] = {1, 2, 3};
    for (int i =0; i<5; i++)
        printf("%d\t", arr3[i]);
    printf("\n");
    int arr4[5] = {0};
    for (int i =0; i<5; i++)
        printf("%d\t", arr4[i]);
    printf("\n");
    printf("Printing Address...");
    printf("\n");
    for (int i =0; i<5; i++)
        printf("%p\t", &arr3[i]);
    printf("\n");
    return 0;
}