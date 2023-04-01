#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={1,2,2,3,4,5,5,5,6};
int n=sizeof(arr)/sizeof(arr[0]);
set<int>s;
for(int i=0;i<n;i++){
    s.insert(arr[i]);
}
set<int>::iterator itr;
int size=s.size();
int a[size];
int i=0;
for(itr=s.begin();itr!=s.end();itr++){
    a[i++]=*itr;
}
for(auto k:a){
    cout<<k<<" ";
}
return 0;
}