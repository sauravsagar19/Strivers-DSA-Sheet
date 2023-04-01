// find the union of the sorted arary
#include<bits/stdc++.h>
using namespace std;
void Array_union(int arr1[],int arr2[],int n, int m){
    set<int>s;
    set<int>:: iterator itr;
    for(int i=0;i<m;i++){
        s.insert(arr2[i]);
    }
    for(int i=0;i<n;i++){
        s.insert(arr1[i]);
    }
    
    int k=0;
    int arr[s.size()];
    for(itr=s.begin();itr!=s.end();itr++){
        arr[k++]=*itr;
    }

    for(auto i:arr){
        cout<<i<<" ";
    }

}
int main(){
int arr1[]={5,3,4,1,2};
int arr2[]={10,8,7,9,6};
int n=5;
int m=5;
Array_union(arr1,arr2,n,m);
return 0;
}