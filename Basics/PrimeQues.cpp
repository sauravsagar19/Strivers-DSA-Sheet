#include<bits/stdc++.h>
using namespace std;
//  check if n is prime or not
bool isPrime(int n){
    for ( int i=2;i<=n;i++){
        if(n%i==0){
            return false;
        }
        return true;
    }
}
// print n prime number
void NPrime(int n){
    int ct=0;
    for ( int i=2;i<INT_MAX;i++){
        if(isPrime(i)){
            cout<<i<<" ";
            ct++;
            if(ct==n){
                break;
            }
        }
    }
}


int main(){
int n;
cin>>n;
// cout<<isPrime(n);
NPrime(n);
return 0;
}