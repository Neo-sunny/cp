#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > vec;
int main(){
int t;
cin>>t;
int x,y;
while(t--){
cin>>x>>y;
vec = vector<vector<int> > (y+1);
while(x<=y){
    int num = x;
    int fac=1;
    while(num<=y){
        vec[num].push_back(x);
        num=++fac*x;       
        if(vec[num].size()==2){ 
            for(auto iy: vec[num]) cout<<iy<<" ";
         }
         
         //cout<<"\n";
    }
    x++;
}
}

    return 0;
}