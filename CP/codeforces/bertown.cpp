#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > ver;
vector<pair<int,int> > edgeList;
vector<int> vis;
vector<int> in;
vector<int> low;
int timer;
int bridge =0;
void dfs(int node, int par){
    vis[node]=1;
    in[node]=low[node]=timer;
    timer++;
    for(auto ch:ver[node]){
        if(ch==par) continue;

        if(!vis[ch]){
            //Edge node-child is a forward edge
            dfs(ch,node);
            if(low[ch]>in[node]){ //cout<<node<<" - "<<ch<<" is a bridge node\n"; 
            bridge=1; return;}
            edgeList.push_back({node,ch});
            low[node] = min(low[node] ,low[ch]);
        }
        else if(vis[ch]){
            // Edge node-child is a backedge
            low[node] = min(low[node], in[ch]);
            if(in[node]>in[ch]){
                edgeList.push_back({node,ch});
            }
        }
    }
}

int main(){
int n,m;
cin>>n>>m;
ver = vector<vector<int> > (n+1);
vis = vector<int> (n+1,0);
in = vector<int> (n+1,0);
low = vector<int> (n+1,0);
int v1,v2;
while (m--)
{   cin>>v1>>v2;
 //   --v1;--v2;
    ver[v1].push_back(v2);
    ver[v2].push_back(v1);
}
    timer=0;
    dfs(1,-1);
    if(bridge) cout<<0<<"\n";
    else{
        cout<<"Edge orientation\n";
        //cout<<"Yet to implement\n";
        for(pair<int, int> e: edgeList){
            cout<<e.first<<" "<<e.second<<"\n";
        }
    }
    return 0;
}