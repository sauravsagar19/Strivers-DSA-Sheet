// find the element that appears ones
#include<bits/stdc++.h>
using namespace std;
int main(){
unordered_map<int,int>m;
int arr[]={1,1,2,2,3,4,4};
int n=7;
for(int i=0;i<n;i++){
    m[arr[i]]++;
}
for(auto ele:m){
    if(ele.second==1){
        cout<<ele.first<<endl;
    }
}

return 0;
}