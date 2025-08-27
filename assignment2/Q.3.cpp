#include <iostream>
using namespace std;
int arr[] = {1, 2, 3, 4, 5, 7, 8, 9};
int n = (sizeof(arr) / (sizeof(arr[0])));
bool binary_sort(int a)
{
    int i = 0;
    int l = 0;
    int u = n - 1;
    while (i < n)
    {
        int m = (l + u) / 2;
        if (arr[m] == a)
        {
            return true;
        }
        else if (arr[m] > a)
        {
            u = m - 1;
        }
        else if (arr[m] < a)
        {
            l = m + 1;
        }
        i++;
    }
    return false;
}
int main()
{
    for (int i = 1; i < n; i++)
    {
        if (!binary_sort(i))
        {
            cout << i << " is missing";
            break;
        }
    }
}