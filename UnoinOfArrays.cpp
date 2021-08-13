#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n1,n2,x,y;
    cin>>n1>>n2;
    set<int>s;
    for(int i=0;i<n1;i++){
        cin>>x;
        s.insert(x);
    }
     for(int i=0;i<n1;i++){
        cin>>y;
        s.insert(y);
    }
    
    cout<<s.size();
    return 0;
}