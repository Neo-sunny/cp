#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int len;
    cin>>len;
    string s;
    cin>>s;int cnt=0;
    for(int i=0;i<s.size(); i++){
        for(int j=i; j<s.size(); j++){
            int sum =0;
            for(int k=i; k<=j; k++){
                sum +=int(s[k]-48);
            }
            if(sum==(j-i+1)) cnt++;
        }
        //cout<<int(s[i]-48);
    } 
    cout<<cnt<<"\n";
}
return 0;
}