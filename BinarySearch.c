#include <stdio.h>
// Function that takes array & size  and return an array

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid < key])
        {
            return end = mid + 1;
        }
        else
        {
            return start = mid - 1;
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
    printf("The element is present at : %d", binarySearch(arr, n, key));
    return 0;
}