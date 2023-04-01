#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={1,2,3,4,5};
int n=5;
int num;
cin>>num; 
bool found=false;
for(int i=0;i<n;i++){
    if(arr[i]==num){
        found=true;
        cout<<i<<" ";
        break;
    }
}
if(found==false){
    cout<<"-1";
}

return 0;
}