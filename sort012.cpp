#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={0,2,1,2,1,0,0,2,1,1};
    int n=sizeof(arr)/sizeof(int);
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    return 0;
}
