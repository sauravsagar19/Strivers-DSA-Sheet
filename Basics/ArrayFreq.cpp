// count he frequency of the elements of array
#include<bits/stdc++.h>
using namespace std;
void CountFreq(int arr[],int n){
    unordered_map<int,int>umap;
    for(int i=0;i<n;i++){
        umap[arr[i]]++;
    }
    // Cal the Frequency
    for(auto itr=umap.begin();itr!=umap.end();itr++){
        
        cout<<itr->first<<"(ele)--> "<<itr->second<<"(Freq) "<<endl;
    }

    // Count the lower and higher frequency
    int maxifreq=INT_MIN;
    int max_ele;
    int mini_freq=INT_MAX;
    int min_ele;
    for(auto itr=umap.begin();itr!=umap.end();itr++){
        if(itr->second>maxifreq){
            maxifreq=itr->second;
            max_ele=itr->first;
        }
        if(itr->second<mini_freq){
            mini_freq=itr->second;
            min_ele=itr->first;
        }
    }
    cout<<"Max Freq Element: "<<max_ele<<endl;
    cout<<"Min Freq Element: "<<min_ele<<endl;
}
int main(){
int arr[]={1,1,2,2,2,2,3,3,3,3,3,3,3,4,5,5};
int n=sizeof(arr)/sizeof(arr[0]);
// cout<<n;
CountFreq(arr,n);
return 0;
}