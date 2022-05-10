#include <stdio.h>
void readArray(int arr[], int n);
void printArray(int arr[], int n);
int binarySearch(int arr[], int n, int key);
int main()
{
    int a[10];
    int n;
    int key;
    printf("Enter size of array:");
    scanf("%d", &n);
    readArray(a, n);
    printArray(a, n);
    printf("Enter searching key: ");
    scanf("%d", &key);
    int ans = binarySearch(a, n, key);
    if(ans == -1)
        printf("Search Key not found!!!\n");
    else
        printf("Search Key is found at :%d\n", ans);
    return 0;
}

void readArray(int arr[], int n)
{
    printf("Enter Array Elements: ");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
}

void printArray(int arr[], int n)
{
    printf("Here is the Array Elements: ");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int binarySearch(int arr[], int n, int key)
{
    int left = 0;
    int right = n-1;
    while(right >= left)
    {
        int mid_index = (left + right) / 2;
        
        if (arr[mid_index] == key)
        {
            return mid_index;
        }
        else if(arr[mid_index] > key)
        {
            right = mid_index - 1;
        }
        else
    
            left = mid_index + 1;
    }
        
    
    return -1; //if not found
}