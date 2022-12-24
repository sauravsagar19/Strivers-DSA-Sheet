#include<bits/stdc++.h>
using namespace std;

// Print Name N times, by recursion
void PrintNTimes(int n){
    if(n==0){
        return;
    }
    cout<<"saurav"<<endl;
    PrintNTimes(n-1);
}
// Print 1 To N using Recursion
int x=1;
void Print_1ToN(int n){
    
    if(x>n){
        return;
    }
    cout<<x<<" ";
    x++;
    Print_1ToN(n);
}

// Print N to 1 using Recursion
void Print_NTo1(int x,int n){
    
    if(x<1){
        return;
    }
    cout<<x<<" ";
    Print_NTo1(x-1,n);
    
}
int main(){
// PrintNTimes(5);
// Print_1ToN(10);
Print_NTo1(10,10);
return 0;
}