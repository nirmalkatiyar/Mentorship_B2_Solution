7. Write a program to print the following pattern:
Input: 7
Output:
1												1	
1	2										2	1	
1	2	3								3	2	1	
1	2	3	4						4	3	2	1	
1	2	3	4	5				5	4	3	2	1	
1	2	3	4	5	6		6	5	4	3	2	1	
1	2	3	4	5	6	7	6	5	4	3	2	1	

solution:
#include<bits/stdc++.h>
using namespace std;
int main(){
   
  for(int i=0;i<7;i++){
       int x=1;
       int y=6;
      for(int j=0;j<=i;j++){
          cout<<x++<<" ";
      }
      for(int k=i+1;k<7;k++){
          cout<<" "<<" ";
      }
      for(int j=7;j<14-i-1;j++){
          cout<<" "<<" ";
      } 
      for(int k=13-i;k<14;k++){
          cout<<--x<<" ";
      }cout<<endl;
  }
    return 0;
}
