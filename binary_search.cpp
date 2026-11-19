#include <iostream>
using namespace std;

void binary_search(int arr[], int n, int key)
{
    int l = 0;
    int h = n - 1;

    while (l <= h)
    {
        int m = (l + h) / 2;

        if (arr[m] == key)
        {
            cout << m << endl;
            return;
        }
        else if (arr[m] > key)
        {
            h = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }

    cout << "Not found" << endl;
}

int main()
{
    int arr[] = {1, 4, 8, 9, 12};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;
    

    binary_search(arr, n, key);

    return 0;
}