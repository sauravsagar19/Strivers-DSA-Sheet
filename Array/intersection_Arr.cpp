// Intersection of two array

#include<bits/stdc++.h>
using namespace std;
int main(){
int arr1[]={1,2,3,3,4,5,6};
int arr2[]={3,3,5};
//sizes of the array
int n=7;
int m=3;
vector<int>ans;
// two pointer approach
int s=0;
int e=0; 
while(s<n && e<m){
    if(arr1[s]<arr2[e]) s++;
    else if(arr2[e]<arr1[s]) e++;
    else{
        // means both are same
        // in that case , we need to add them to the ans vector and move them both 
        ans.push_back(arr1[s]);
        s++;
        e++;
    }
}
for(auto i:ans){
    cout<<i<<" ";
}
return 0;
}