// Armstrong number is a number that is equal to the sum of cubes of its digits
// 1, 153, 370, 371 and 407 are the Armstrong numbers
#include<bits/stdc++.h>
bool checkArmstrong(int n){
    int sum=0;
    int count=0;
    int orgNum=n;
    int temp=n;
    while(temp!=0){
        count++;
        temp/=10;
    }
    while(n!=0){
        
        int digit=n%10;
        sum+=pow(digit,3);
        n/=10;

    }
    return (sum==orgNum);
}
using namespace std;
int main(){
int n;
cin>>n;
cout<<checkArmstrong(n);
return 0;
}