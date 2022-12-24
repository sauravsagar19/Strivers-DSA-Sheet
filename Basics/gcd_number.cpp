// Find GCD of two number
#include<bits/stdc++.h>
using namespace std;
int main(){
int n1,n2;
cin>>n1>>n2;
if(n1<n2){
    for (int i=n1;i>=2;i--){
        if(n1%i==0 && n2%i==0){
            cout<<i<<" ";
            break;
        }
    }
}
else{
    for (int i=n2;i>=2;i--){
        if(n2%i==0 && n1%i==0){
            cout<<i<<" ";
            break;
        }
    }
}
return 0;
}