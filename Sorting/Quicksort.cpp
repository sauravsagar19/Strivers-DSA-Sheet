#include<bits/stdc++.h>
using namespace std;
int partition(int arr[], int s, int e){
    int pivot=arr[s];
    int count=0;
    // counting the min element than pivot
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    // count is the number of element less than pivot, that means we have to place pivot after all that minimum no.
    int pivotidx=s+count;
    swap(arr[s],arr[pivotidx]);  // now the pivot element is at their correct possition
    int i=s;
    int j=e;
    while(i<pivotidx && j>pivotidx){ // we will compare the left part and the right part of the pivot element

        while(arr[i]<=arr[pivotidx]){   // whiile it is small , we will do nothing , simply i++
            i++;
        }
        while(arr[j]>=arr[pivotidx]){ // untill while it is greater ,we will do noting , simply j--
            j--;
        }
        if(i<pivotidx && j>pivotidx){ // if any elemnet caught at the weong side, simply swap them, and i++ and j--
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotidx;

}

void Quicksort(int arr[],int s, int e){
    if(s>=e) return;
    // partition
    int p=partition(arr,s,e);
    Quicksort(arr,s,p-1);
    Quicksort(arr,p+1,e);
}
int main(){
int arr[] = {6, 8, 3, 2, 7, 1, 5, 4, 9};
    int n = sizeof(arr) / sizeof(arr[0]); // ye Array ka size nikalne ka mehod hai.
    Quicksort(arr, 0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
return 0;
}