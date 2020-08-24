#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > ver;
vector<int> vis;
vector<int> in;
vector<int> out;
int timer=0;
void dfs(int node){
    vis[node]=1;
    in[node]=timer++;
    for (auto ch : ver[node]){
        if(!vis[ch])
            dfs(ch);
    }
    
    out[node]=timer++;
    
}
 int main(){
    int v, e;
    cin>>v>>e;
    ver = vector<vector<int> > (v);
    vis = vector<int> (v,0);
    in = vector<int> (v,0);
    out = vector<int> (v,0);
     int v1,v2;
    while (e--)
    {   cin>>v1>>v2;
        --v1;--v2;
        ver[v1].push_back(v2); 
        ver[v2].push_back(v1);        
    }

     dfs(0);
    for(int i=0;i<v; i++){
        cout<<"IN>>"<<i<<" "<<in[i]<<"\n";
        cout<<"Out>>"<<i<<" "<<out[i]<<"\n";
    }
    return 0;
}