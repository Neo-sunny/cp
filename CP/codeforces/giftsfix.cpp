#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n;m=n;
        vector<long> cand(n);
        vector<long> orng(n);
        int i=0, j=0,ca,ora;
        long min1=LONG_MAX, min2=LONG_MAX; 
        while(n--){ cin>>ca;cand[j++]=ca; 
            if(ca<min1) min1= ca;
          }
        while(m--){ cin>>ora;orng[i++]=ora; 
            if(ora<min2) min2= ora;
        }
        long total=0;
        for(int i=0; i<cand.size(); i++ ){
            long v1 = cand[i]-min1;
            long v2 = orng[i]-min2;
            if(v1>v2) total+= ((v1-v2)+v2); 
            else total+= ((v2-v1)+v1);
        }

        cout<<total<<"\n";
    }
}