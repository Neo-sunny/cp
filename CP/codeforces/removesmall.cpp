#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> v(n);
    int nope=0;
    int num, i=0;
    while(n--){
        cin>>num;
        v[i++]=num;
    }
    int prev=v[0];
    for(int i=1; i<v.size(); i++){
        if(abs(prev-v[i])>1) {nope=1; break;} 
        prev=v[i];
    }
    if(nope) cout<<"NO\n";
    else cout<<"YES\n";
}
    return 0;
}