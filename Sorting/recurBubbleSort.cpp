#include<bits/stdc++.h>
using namespace std;
void RecurrBubble(int arr[], int n){
    if(n==0 || n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]); // Ek swap hmlog karenge baki recursion samhal lega
        }
        RecurrBubble(arr,n-1);
    }
}
int main(){
int arr[] = {6, 8, 3, 2, 7, 1, 5, 4, 9};
    int n = sizeof(arr) / sizeof(arr[0]); // ye Array ka size nikalne ka mehod hai.
    RecurrBubble(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
return 0;
}