#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > ver;
vector<int> vis;
vector<int> in;
vector<int> low;
int timer;

void dfs(int node, int par){
    vis[node]=1;
    in[node]=low[node]=timer;
    timer++;
    for(auto ch:ver[node]){
        if(ch==par) continue;

        if(!vis[ch]){
            //Edge node-child is a forward edge
            dfs(ch,node);
            if(low[ch]>in[node]){ cout<<(node+1)<<" - "<<(ch+1)<<" is a bridge node\n";}
            low[node] = min(low[node] ,low[ch]);
        }
        else if(vis[ch]){
            // Edge node-child is a backedge
            low[node] = min(low[node], in[ch]);
        }
    }
}
int main(){

int v,e;
cin>>v>>e;
ver = vector<vector<int> > (v);
vis = vector<int> (v,0);
in = vector<int> (v,0);
low = vector<int> (v,0);
int v1,v2;
while (e--)
{ cin>>v1>>v2;
    --v1;--v2;
    ver[v1].push_back(v2);
    ver[v2].push_back(v1);
}


    timer=0;

    dfs(0,-1);

    return 0;
}