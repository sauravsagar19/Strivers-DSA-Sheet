#include<bits/stdc++.h>
using namespace std;
int missingNumber(int A[], int N)
{
    // Your code goes here
    int sum1=0;
    for(int i=1;i<=N;i++){
        sum1+=i;
        
    }
    int sum2=0;
    for(int i=0;i<N-1;i++){
        sum2+=A[i];
    }
    return abs(sum1-sum2);
    
    
}
int main(){
int arr[]={1,2,3,4};
int res=missingNumber(arr,5);
// int sum=0;
// for(int i=1;i<=5;i++){
//     sum+=i;
// }
// int sum2=0;
// for(int i=0;i<4;i++){
//     sum2+=arr[i];
// }
// cout<<abs(sum-sum2);
cout<<res;
return 0;
}