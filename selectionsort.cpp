#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    int arr[] = {4,5,1,2,3};
    n = sizeof(arr) / sizeof(int);
    for(i=0;i<n-1;i++)
    {
        int mi=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[mi])
            {
                mi=j;
            }
        }
        swap(arr[i], arr[mi]);
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}