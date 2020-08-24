#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > ver;
vector<int> vis;
vector<int> dis;
int dist=0;

void bfs(int s){
    vis[s]=1;
    queue<int> q;
    q.push(s);
    dis[s]=0;
    while (!q.empty()){
         int elm = q.front();
        q.pop();dist++;
        for(auto ch: ver[elm]){
            if(!vis[ch]){
                q.push(ch);
                dis[ch]=dis[elm]+1;
                vis[ch]=1;
            }
        }
    }
}
int main(){
int t;
cin>>t;
while (t--){
     int n,m;
    cin>>n>>m;
    ver = vector<vector<int> > (n);
    vis = vector<int> (n,0);
    dis = vector<int> (n,0);
    int v1,v2;
    while(m--){
        cin>>v1>>v2;
        --v1;--v2;
        ver[v1].push_back(v2);
        ver[v2].push_back(v1);
    }
    bfs(0);
    cout<<"distance::"<<dis[n-1]<<"\n";
    dist=0;
}
    return 0;
}