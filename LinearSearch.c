#include <stdio.h>
// Function that takes array & size  and return an array

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter the array element : ");

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter the number that you want to Search : ");
    scanf("%d", &key);
    printf("The element is present at : %d", linearSearch(arr, n, key));
    return 0;
}