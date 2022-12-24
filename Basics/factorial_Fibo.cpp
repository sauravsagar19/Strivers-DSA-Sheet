// find Factorial with Recursion
#include<bits/stdc++.h>
using namespace std;
int Fact(int n){
    if(n==1 || n==2){
        return n;
    }
    return n*Fact(n-1);
}

// Print Nth Fibonacci number
int Fibo(int n){
    if(n<=1){
        return n;
    }
    return Fibo(n-1)+Fibo(n-2);
}

void PrintFibo(int n){
    for(int i=0;i<n;i++){ 
        cout<<Fibo(i)<<" ";  // Or simply we can call this in our main function also. sa as this way
    }
}
int main(){
    int n;
    cin>>n;
    // cout<<Fact(n);
    cout<<Fibo(n)<<endl;;
    PrintFibo(n);


return 0;
}