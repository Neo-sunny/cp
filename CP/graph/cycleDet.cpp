#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > ver;
vector<int> vis;
vector<int> par;

bool dfs(int node, int p){
    vis[node]=1;
    
    for(auto ch: ver[node]){
        if(!vis[ch]){
            if(dfs(ch, node)==true) 
                return true;
        }    
        else if(ch!=p) return true;  
    }
    return false;
}

int main(){
    int v, e;
    cin>>v>>e;
    ver = vector<vector<int> > (v);
    vis = vector<int> (v,0);
    par = vector<int> (v,0);
    int v1,v2;

    while (e--)
    {   cin>>v1>>v2;
        --v1;--v2;
        ver[v1].push_back(v2); 
        ver[v2].push_back(v1);        
    }
   bool cycle= dfs(0,-1);
   if(cycle) cout<<"cycle Found\n";
   else cout<<"No cycles found\n";

   return 0;
}