#include <bits/stdc++.h>
using namespace std;
// Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements
// if they are in the wrong order.

void Bubble(int arr[], int n)      // best time complexity=O(n)
{
    int swapped = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) //we just start comapring the two adjacent element, if they are in wrong order,
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped = false)  // wherever we find that swapped is false that means we have not done swapping as it
                            // is already sorted
        {
            break;
        }
    }
}
int main()
{
    int arr[] = {6, 8, 3, 2, 7, 1, 5, 4, 9};
    int n = sizeof(arr) / sizeof(arr[0]); // ye Array ka size nikalne ka mehod hai.
    Bubble(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}