#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={10,2,3,500,11,7};
int maxi=arr[0];
for(int i=0; i<6; i++){
    if(arr[i]>maxi)maxi=arr[i];
}
cout<<maxi;
return 0;
}