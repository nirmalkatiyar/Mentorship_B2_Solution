#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int last=arr[n];
    for(int j=n;j>1;j--){
      arr[j]=arr[j-1];
    }
    arr[1]=last;
    for(int k=1;k<=n;k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}
