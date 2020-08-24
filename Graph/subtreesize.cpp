#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > ver;
vector<int> vis;
vector<int> subtree;

int dfs(int node){
    vis[node]=1;
    int curr_size=1;
    for(int ch:ver[node]){
        if(!vis[ch])
        curr_size+= dfs(ch);
    }
    subtree[node]=curr_size;
    return curr_size;
}

int main(){
int v, e;
    cin>>v>>e;
    ver = vector<vector<int> > (v);
    vis = vector<int> (v,0);
    subtree = vector<int> (v,0);
    int v1,v2;
    while (e--)
    { cin>>v1>>v2;
      --v1;--v2;
      ver[v1].push_back(v2);
      ver[v2].push_back(v1);  
    }
    
    dfs(0);
    for(int i=0; i<v;i++){
        cout<<subtree[i]<<" ";
    }
    return 0;
}