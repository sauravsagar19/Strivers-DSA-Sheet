// check if array is sorted or not
#include<bits/stdc++.h>
using namespace std;
bool Is_sorted(int arr[], int n){
    if(n==0|| n==1){
        return true;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){

int arr[]={1,2,3,4,5,6};
bool sorted=Is_sorted(arr,6);
cout<<sorted;
return 0;
}