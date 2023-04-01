#include<bits/stdc++.h>
using namespace std;
int secondSmallest(int arr[], int n){
    int mini1=arr[0];
    int mini2=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<mini1){
            mini2=mini1;
            mini1=arr[i];
        }
        else if ( arr[i]>mini1 && arr[i]<mini2){
            mini2=arr[i];
        }
    }
    return mini2;
}
int main(){
int arr[]={1,2,3,4,5,6};
int ssmallest=secondSmallest(arr,6);
cout<<ssmallest;
return 0;
}