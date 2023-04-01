// longest subArray with sum [positive+negative] [vvvvvvvvv*i]
#include<bits/stdc++.h>
using namespace std;
int longestSubArray(int arr[],int n,int k){
    map<int,int>m;
    int presum=0;
    int len=0;
    m[0]=-1; // initialize the sum 0 at -1
    for(int i=0;i<n;i++){
        presum+=arr[i];
        if(m.find(presum-k)!=m.end()){
            len=max(len,i-m[presum-k]);
        }
        if(m.find(presum)==m.end()){
            m[presum]=i;
        }
    }
    return len;
}
int main(){
int arr[]={0,0,1,0,0,0,0};
int n=7;

int k=1;
// brute force (O(n^2))

// int t=15;
// int len=0;
// int sum;
// for(int i=0;i<n;i++){
//     sum=0;
//     for(int j=i;j<n;j++){
//         sum+=arr[j];
//         if(sum==t){
//             len=max(len,j-i+1);
//         }
//     }  
// }
// cout<<len;

// optimal (using hashmap)
int res=longestSubArray(arr,n,k);
cout<<res;


return 0;
} 