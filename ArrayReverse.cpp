#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a=0;
    int b=n-1;
    while(a<b){
        int temp=arr[a];
        arr[a]=arr[b];
        arr[b]=temp;
        a++;
        b--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
