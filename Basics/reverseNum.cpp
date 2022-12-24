#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
// int rev=0,rem;
// while(n>0){
//     rem=n%10;
//     rev=rev*10+rem;
//     n=n/10;
// }
// cout<<rev;

string s=to_string(n);
reverse(s.begin(),s.end());
cout<<s<<endl;
return 0;
}