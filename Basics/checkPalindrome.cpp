#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(string s){

    string org=s;
    reverse(s.begin(),s.end());
    return org==s;

}
int main(){
string s;
cin>>s;
cout<<checkPalindrome(s);
return 0;
}