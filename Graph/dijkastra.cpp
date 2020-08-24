#include <iostream>
#include <bits/stdc++.h>
#define INF 1000000000
using namespace std;

vector<pair<int,int> > adj[1001];

int main(){

int n,m,a,b,w;
cin>>n>>m;
while (m--)
{ cin>>a>>b>>w;
  adj[a].push_back({b,w});
  adj[b].push_back({a,w});
}

priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > pq;
vector<int> dist(n+1,INF);
pq.push({0,1});
dist[1]=0;
while(!pq.empty()){
    int curr_n = pq.top().second;
    int curr_d = pq.top().first;
    pq.pop();

    for(pair<int,int>  ed: adj[curr_n] ){

        if(curr_d+ed.second <dist[ed.first]){
            dist[ed.first] =curr_d+ed.second;
            pq.push({dist[ed.first], ed.first});
        }
    }

}
for(int i=1;i<=n; i++){ cout<<dist[i]<<" ";}
    return 0;
}