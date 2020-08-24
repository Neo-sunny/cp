#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void dfs(int node, int val);
vector<vector<int> > ver;
vector<int> vis;
vector<int> len;

void dfs(int node, int val){
    vis[node]=1;
    len[node]=val;
    for(auto it: ver[node]){
        if(!vis[it])
            dfs(it, val+1) ;
    }
}
int main(){
    int v, e;
    cin>>v>>e;
    ver = vector<vector<int> > (v);
    vis = vector<int> (v,0);
    len = vector<int> (v,0);
    int v1,v2;
    while (e--)
    {   cin>>v1>>v2;
        --v1;--v2;
        ver[v1].push_back(v2); 
        ver[v2].push_back(v1);        
    }
     dfs(1,0);
   
    for (auto i : len)
    {
        cout<<i<<" ";
    }
    
    return 0;
}
