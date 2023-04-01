#include<bits/stdc++.h>
using namespace std;
void Merge(int arr[], int s, int mid , int e){

    
    int len1=mid-s+1;
    int len2=e-mid;

    int arr1[len1];
    int arr2[len2];

    int k=s;
    for(int i=0;i<len1;i++){
        arr1[i]=arr[k++];
    }
    k=mid+1;
    for(int i=0;i<len2;i++){
        arr2[i]=arr[k++];
    }

    // Merging the two sorted array
    int idx1=0; 
    int idx2=0;
    int arrayidx=s;;
    while(idx1<len1 && idx2<len2){
        if(arr1[idx1]<arr2[idx2]){
        arr[s++]=arr1[idx1++];
        }
        else{
            arr[s++]=arr2[idx2++];
        }
    }
    while(idx1<len1){
        arr[s++]=arr1[idx1++];
    }
    while(idx2<len2){
        arr[s++]=arr2[idx2];
    }



}
void Mergesort(int arr[], int s, int e){
    if(s<e){
        int mid=(s+e)/2;
    // deviding the array
        Mergesort(arr,s,mid);
        Mergesort(arr, mid+1, e);

        // Merging the array
        Merge(arr,s,mid,e);
    }
    
}
int main(){
int arr[]={10,5,3,7,4,2};
int n=sizeof(arr)/sizeof(arr[0]);
Mergesort(arr,0,n-1);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}