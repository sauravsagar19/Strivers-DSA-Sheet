// find max consucative one
#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={1,1,0,1,1,1,0,1,1};
int n=9;
int cnt=0;
int maxCons=0;
for(int i=0;i<n;i++){
    if(arr[i]!=0){
        cnt++;
        // if(cnt>=maxCons){
        //     maxCons++;
        // }
        // or
        maxCons=max(maxCons,cnt);
    }
    else{
        cnt=0;
    }
}
cout<<maxCons;
return 0;
}