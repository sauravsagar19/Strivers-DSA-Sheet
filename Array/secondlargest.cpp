// find second largest without sorting
#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={10,211,3,50,11,7};
int max1=arr[0];
int max2=-1;
for(int i=0;i<6;i++){
    if(arr[i]>max1)
    {
        max2=max1;
        max1=arr[i];


    }
    else if(arr[i]<max1 && arr[i]>max2){
        max2=arr[i];
    }
}
cout<<max2;

return 0;
}