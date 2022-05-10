//creating array
#include<stdio.h>
int main()
{
    int a[10]; //4 * 5 = 20
    int  n;
    int min, max;
    //Reading elements in array
    printf("Enter the size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]); 
    }
    
    min = a[0];
    max = a[0];
    //finding min and max elements of array
    for(int i=1; i<n; i++)
    {
        if(min > a[i])
        {
            min = a[i];
        }
        if(max < a[i] )
        {
            max = a[i];
        }
    }
   
   printf("\nMinimum elements: %d", min);
   printf("\nMaximum elements: %d", max);

   return 0;
}