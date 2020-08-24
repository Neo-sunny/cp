#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > ver;
vector<int> vis;
vector<pair<int,int> > edge;
vector<int> conn;
int cc=0;

void dfs(int node){
    vis[node]=1;
    conn[node]=cc;
    for(auto ch:ver[node]){
        if(!vis[ch]){
            dfs(ch);
        }
    }
}
int main(){
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
ver = vector<vector<int> > (n+1);
vis = vector<int> (n+1,0);
conn = vector<int> (n+1,0);
 edge.clear();
int x1,x2;string r;
while(k--){
    cin>>x1>>r>>x2;
    if(r == "="){
        ver[x1].push_back(x2);
        ver[x2].push_back(x1);
    }else{
        edge.push_back({x1,x2});
    }
}
    cc=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i);
            cc++;
        }
    }
    int flag =1;
   for(int i=0; i<edge.size(); i++){
       int a = edge[i].first;
       int b = edge[i].second;
       if(conn[a]==conn[b]){
           flag=0;break;
       }
   }
   if(flag)cout<<"YES\n";
   else cout<<"NO\n"; 
}

    return 0;
}