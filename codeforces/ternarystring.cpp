#include <iostream>
#include <bits/stdc++.h>
#define lli long long int;
using namespace std;
string s;
bool isvalid(int k){
    int freq[4] ={0};
    for(int i=0; i<k-1; i++){
        int idx = s[i]-'0';
        freq[idx]++;
    }
    for(int i=k-1; i<s.size(); i++){
        int idx = s[i]-'0';
        freq[idx]++;
        
        if( freq[1]>0 && freq[2]>0  && freq[3]>0  ) return true;

        idx = s[i-k+1]-'0';
        freq[idx]--;
    }
    return false;
}

int main(){
int t;
cin>>t;

while(t--){

cin>>s;
int n = s.size();
int low=3, high= n;
int res = n+1;

while(low<=high){
    int mid = (low+high)/2;

    if(isvalid(mid)){
        res= min(res,mid) ;
        high = mid-1;
    }
    else {
        low = mid+1;
    }
}
if(res==(n+1)) cout<<0<<"\n";
else cout<<res<<"\n";

}

return 0;
}