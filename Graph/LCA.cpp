#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<vector<int> > ver;
vector<int> vis;
vector<int> parent;
vector<int> height;

void dfs(int node, int par){
    vis[node]=1;
//    height[node]=1;
    for(auto ch:ver[node]){
        if(!vis[ch]){
            height[ch]= height[node]+1;
            parent[ch]=node;
            dfs(ch,node);
        }
    }
}
int main(){

int v,e;
cin>>v>>e;
ver =vector<vector<int> > (v);
vis = vector<int> (v,0);
height = vector<int> (v,0);
parent = vector<int> (v,-1);

int v1,v2;
while(e--){
    cin>>v1>>v2;
    --v1;--v2;
    ver[v1].push_back(v2);
    ver[v2].push_back(v1);
}
dfs(0,-1);
int a,b; cin>>a>>b;
int d = abs(height[a]-height[b]);
if(height[b]>height[a]) { swap(a,b); }
while(d--){
    a =parent[a];
}
if(a==b) cout<<"LCA: "<<a<<"\n";
else{
  while(parent[a]!=parent[b]){
      a =parent[a];
      b= parent[b];
  }  

  cout<<"LCA: "<<parent[a]<<"\n";
}
// for(auto ind:height){ cout<<ind<<" ";}
// cout<<"Parent array\n";
// for(auto ind:parent){ cout<<ind<<" ";}
    return 0;
}