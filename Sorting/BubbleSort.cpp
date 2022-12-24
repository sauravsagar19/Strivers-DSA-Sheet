#include<bits/stdc++.h>
using namespace std;
// Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements 
// if they are in the wrong order.
void bubble(int arr[],int n){
    for(int i=0;i<n;i++){   //  we just start comapring the two adjacent element, if they are in wrong order,
        for(int j=i+1;j<n;j++){  // simply sort them by sswaping.
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);                  // TimeComplexity: O(n): Best Time Complexity
            }                                           // avg Time Complexity: O(n^2)
        }
    }
}
int main(){
int arr[]={6,8,3,2,7,1,5,4,9};
int n=sizeof(arr)/sizeof(arr[0]);   // ye Array ka size nikalne ka mehod hai.
bubble(arr,n);
for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
return 0;
}