#include <bits/stdc++.h>
using namespace std;
// In Selection SOrt we simply swap the min elemnt fromm the unsorted array to the begining of sorted array
// TC: O(n^2)
void SelectionSort(int arr[],int n)
{
    if(n==1) return;
    for (int i = 0; i < n - 1; i++)
    {
        int minEle = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minEle])
                minEle = j;

            
        }
        swap(arr[minEle], arr[i]);
    }
}

int main()
{
    int arr[] = {2, 4, 1, 9, 8, 7, 5};
    SelectionSort(arr,7);
    for (auto i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}