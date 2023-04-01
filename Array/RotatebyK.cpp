// Rotate by k elements;
#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={1,2,3,4,5,6,7};              // o/p: {6,7,1,2,3,4}
int n=7;
int r;
cin>>r;
// Here r is the number of rotation . if the number of rotaion is the multiple of the size of the array n, the array is same to same.suppose we have been told to rotate 8 times, so till 7 times the array is going to be same. We just have to rotate the array 1.so here is the trick
int d=r%n; // suppose r is 9 then till 7 the array is same , so we have to do just 2 rotation. (9%7==2)

int temp[d];
// we coppied the d elements in the temp array
for(int i=0;i<d;i++){
    temp[i]=arr[i];
}
// hmlog loop chalaenge d se 
for(int i=d;i<n;i++){
    arr[i-d]=arr[i];
}
// last d element will be copied from the temp array
int k=0;
for(int i=n-d;i<n;i++){
    arr[i]=temp[k++];
}

// Display 
for(auto j:arr){
    cout<<j<<" ";
}
return 0;
}