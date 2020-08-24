#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while (t--)
{
    string s;
    cin>>s;
    vector<int> lens; int sum=0;
    for(int i=0 ;i<s.size(); i++){
        if(s[i]=='0') {
            if(sum>0) lens.push_back(sum);
            sum=0;
        }
        else if(s[i]=='1') sum++;
    }
    if(sum>0) lens.push_back(sum);
    int score=0;
    if(lens.size()==0)cout<<0<<"\n";
    else{
        sort(lens.begin(), lens.end(), greater <>());
        for(int i=0; i<lens.size(); i+=2){
            score+=lens[i];
        }
        cout<<score<<"\n";
    }
}

return 0;
}