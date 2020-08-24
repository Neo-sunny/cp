#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int r=0,cnt=3;
    //while(cnt--){
    if(s[0]=='R'){r++; }
    if(s[1]=='R'){r++;}
   // else if(s[1]=='S' && r>0){ r=0;}
     if(s[2]=='R' && s[1]=='R'){r++;}
     if(s[2]=='R' && r==0) r++;
    
         
    cout<<r<<"\n";
}