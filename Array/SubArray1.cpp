// Print Subarray within an Array
#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={1,2,3,4,5,6,7};
int n=7;
int cnt=0;
int sum=0;
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        for(int k=i;k<j;k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;   
    }  
}
return 0;
}