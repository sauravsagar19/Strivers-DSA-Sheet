#include<bits/stdc++.h>
using namespace std;
// Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. 
// The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and 
// placed at the correct position in the sorted part
void Insertion(int arr[], int n){
    for(int i=0; i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            // swap(arr[j],arr[j-1]);
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }

    }
}
int main(){
int arr[]={6,8,3,2,7,1,5,4,9};
int n=sizeof(arr)/sizeof(arr[0]);
Insertion(arr,n);
for (auto i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
return 0;
}