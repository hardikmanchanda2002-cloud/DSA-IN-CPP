#include <iostream>
using namespace std;

void bubblesort(int arr[], int n)
{
    int i, j;

    cout << "Unsorted array: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Sorted array: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(int);

    bubblesort(arr, n);

    return 0;
}