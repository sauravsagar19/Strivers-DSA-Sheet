#include<bits/stdc++.h>
using namespace std;
int i=1;
int sum=0;
int sumOFFirstN_recur(int i,int n){
    
    if(i>n){
        return sum;
    }
    sum+=i;
    sumOFFirstN_recur(i+1,n);
}
int main(){
int n;
cin>>n;

cout<<sumOFFirstN_recur(i,n);
return 0;
}