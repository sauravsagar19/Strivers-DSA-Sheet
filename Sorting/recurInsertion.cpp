#include<bits/stdc++.h>
using namespace std;
void RecurInsertion(int arr[],int n){
    if(n==0|| n==1){
        return;
    }
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);      
            j--;
        }
    }
    RecurInsertion(arr,n-1);   // Ek swap hmlog karenge baki recursion samhal lega
} 
int main(){
int arr[]={61,8000,3,2,7,1,5,4,9};
int n=sizeof(arr)/sizeof(arr[0]);
RecurInsertion(arr,n);
for (auto i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
return 0;
}