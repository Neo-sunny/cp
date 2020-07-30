#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<vector<int> > ver;
vector<int> vis;
int farnode=0, diam=0;
void dfs(int node, int dis){
    vis[node]=1;
    for(auto ch: ver[node]){
        if(!vis[ch]){
            farnode=ch;
            if(diam<(dis+1)) diam=dis+1;
            dfs(ch,dis+1);
        }           
    }
}
int main(){
int v, e;
cin>>v>>e;
ver = vector<vector<int> > (v);
vis = vector<int> (v,0);
int v1,v2;
while (e--)
{  cin>>v1>>v2;
    --v1;--v2;
    ver[v1].push_back(v2);
    ver[v2].push_back(v1);        
 }
    dfs(0,0);
    cout<<"farthest Node:"<<farnode;
    vis = vector<int> (v,0);
    dfs(farnode,0);
    cout<<"\ndiameter is"<<diam;
    return 0;
}