#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void dfs(int node);

int N,M;
vector<vector<int> > ver;
vector<int> vis;
int main(){
    
    cin>>N>>M;
   // edges = vector<int> (N);
        ver =vector<vector<int> > (N);
        vis = vector<int> (N,0);
    int a,b;
    while (M--)
    {  cin>>a>>b;
        --a;--b;
        ver[a].push_back(b);
        ver[--b].push_back(--a);
     }
     dfs(0);
    return 0;
}


void dfs(int node){
    vis[node]=1;
    cout<<node<<" ";
    for(auto it: ver[node]){
        if(!vis[it])
            dfs(it);
    }
    
}