#include <bits/stdc++.h>
using namespace std;
pair<int ,int> solution(int arr[],int n){
    pair<int,int>p;
    int mini=INT_MAX,maxi=INT_MIN;
    for(int i=0;i<n;i++ ){
        mini=min(mini,arr[i]);
        maxi=max(maxi,arr[i]);
    }
    p.first=mini;
    p.second=maxi;
    return p;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  pair<int, int>p=solution(arr,n);
  cout<<"minimum :"<<p.first<<" "<<"maximum:- "<<p.second;
    return 0;
}
