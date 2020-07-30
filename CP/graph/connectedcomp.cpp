#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void dfs(int node);
vector<vector<int> > ver;
vector<int> vis;

void dfs(int node){
    vis[node]=1;
    for(auto it: ver[node]){
        if(!vis[it])
            dfs(it);
    }
}
int main(){
    int v, e;
    cin>>v>>e;
    ver = vector<vector<int> > (v);
    vis = vector<int> (v,0);
    int v1,v2;
    while (e--)
    {   cin>>v1>>v2;
        --v1;--v2;
        ver[v1].push_back(v2);
        ver[v2].push_back(v1);        
    }
    int cc=0;
    for(int i=0; i<v; i++){
        if(!vis[i]){
            dfs(i);
            cc++;
        }
    }
    cout<<cc<<"\n";
    return 0;
}
void dfs(int node){
    vis[node]=1;
    for(auto it: ver[node]){
        if(!vis[it])
            dfs(it);
    }
}