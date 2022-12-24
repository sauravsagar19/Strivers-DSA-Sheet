//  check whether the string is palindromic or not
#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(string s, int start, int end){
    if(s[start]!=s[end]){
        return false;
    }
    if(start==end){
        return true;
    }
    
    return checkPalindrome(s,start+1,end-1);
}
int main(){
string s="MchnnffgdfhOM";
int start=0;
int end=s.length()-1;
if(checkPalindrome(s,start,end)){
    cout<<"True"<<endl;
}
else{
    cout<<"False";
}
return 0;
}