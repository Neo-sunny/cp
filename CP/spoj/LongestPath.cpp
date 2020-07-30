#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<vector<int> > ver;
vector<int> vis;
int maxD, maxN;
void dfs(int node, int dis){
    vis[node]=1;
    if(dis>maxD){ maxD=dis; maxN=node;}
    for(auto ch: ver[node]){
        if(!vis[ch]){
            dfs(ch,dis+1);
        }           
    }
}
int main() {
	int v;
	cin>>v;
	int e=v-1;
	ver = vector<vector<int> > (v);
	vis = vector<int> (v,0);
	int v1,v2;
	while(e--){
	cin>>v1>>v2;
    --v1;--v2;
    ver[v1].push_back(v2);
    ver[v2].push_back(v1);
	}
	maxD=-1;
	dfs(0,0);
	
	vis = vector<int> (v,0);
	maxD=-1;
    dfs(maxN,0);
    cout<<maxD<<"\n";
	return 0;
}