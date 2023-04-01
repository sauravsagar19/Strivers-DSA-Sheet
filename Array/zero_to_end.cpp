// move zero to end

// Input: 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
// Output: 1 ,2 ,3 ,4 ,1 ,0 ,0 ,0

#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={1,0,2,3,0,4,0};
int n=7;
// Naive approach
// vector<int>v;
// for(int i=0;i<7;i++){
//     if(arr[i]!=0){
//         v.push_back(arr[i]);
//     }
// }
// for(int i=0;i<7;i++){
//     if(arr[i]==0){
//         v.push_back(arr[i]);
//     }

// }
// for(auto i: v)
// {
//     cout<<i<<" ";
// }

// optimal approach (reduced space complexity)
int j=-1; 
for(int i=0;i<n;i++){
    if(arr[i]==0){
        j=i; /// we stored the index of the first element
        break;
    }
}
// we will just iterate after j and if non zero found , we will just swap
for(int k=j+1;k<n;k++){
    if(arr[k]!=0){
        swap(arr[k],arr[j++]);
    }
}
for(auto z:arr){
    cout<<z<<" ";
}
return 0;
}