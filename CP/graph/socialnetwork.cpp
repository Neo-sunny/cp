#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > ver;
vector<int> vis;
vector<int> dis;

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src]=1;
    int d=0;
    while(!q.empty()){
        int frnt = q.front();
        q.pop();
        for(auto ch:ver[frnt]){
            if(!vis[ch]){
                dis[ch]=dis[frnt]+1;
                vis[ch]=1;
                q.push(ch);
            }
        }
    }
}
int main(){
int v,e;
cin>>v>>e;
ver = vector<vector<int> > (v);
vis = vector<int> (v,0);
dis = vector<int> (v,0);
int v1,v2;
while(e--){
    cin>>v1>>v2;
    ver[v1].push_back(v2);
    ver[v2].push_back(v1);
}
int m;
cin>>m;
while(m--){
    int ver,d;
    cin>>ver>>d;
    bfs(ver);
    int cnt=0;
    for(int i=0; i<v;i++){ if(dis[i]==d){ cnt++;} 
      //  cout<<dis[i]<<" ";
    }
    cout<<cnt<<"\n";
    vis = vector<int> (v,0);
    dis = vector<int> (v,0);
}
    return 0;
}