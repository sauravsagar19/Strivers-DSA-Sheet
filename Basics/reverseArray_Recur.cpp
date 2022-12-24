// Reverse the Array Recursively
#include<bits/stdc++.h>
using namespace std;
void reverseArr(int start,int end, int v[]){
    if(start>end){
        return ;
    }
    // if(start<end){
    swap(v[start],v[end]);
    reverseArr(start+1,end-1,v);
    }
// }
int main(){
int arr[]={1,2,3,4,5};
reverseArr(0,4,arr);
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
