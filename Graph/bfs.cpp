#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > ver;
vector<int> vis;
vector<int> dis;
void bfs(int source){
    queue<int> q;
    q.push(source);
    int dist=0;
    vis[source]=1;
    while(!q.empty()){
        int elm = q.front();
        cout<<elm<<" ";
        q.pop();
        for(auto ch :ver[elm]){
            if(!vis[ch]){
                q.push(ch);
                vis[ch]=1;
                dis[ch]= dis[elm]+1;
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
    --v1;--v2;
    ver[v1].push_back(v2);
    ver[v2].push_back(v1);
}
bfs(3);
cout<<"\n";
for(int i=0;i<v; i++){
    cout<<dis[i]<<" ";
}
    return 0;
}