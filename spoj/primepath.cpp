#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > ver;
vector<int> vis;
vector<int> dis;
vector<int> prime;

void bfs(int src){
    queue<int> q;
    int dist=0;
    q.push(src);
    vis[src]=1;
    dis[src]=0;
    while(!q.empty()){
        int elm = q.front();
        q.pop();dist++;
        for(auto ch:ver[elm]){
            if(!vis[ch]){
                dis[ch]=dis[elm]+1;
                vis[ch]=1;
                q.push(ch);
            }
        }
    }
} 
bool isPrime(int num){
    for(int i=2; i*i<=num; i++){
        if(num%i==0) return false;
    }
    return true;
}

bool isneighbour(int a, int b){
    int cnt =0;
    while(a>0){
        if(a%10 != b%10) cnt++;

        a/=10; b/=10;
    }
    if(cnt==1) return true;
    else return false;
}
void buildGraph(){
   // ver = vector<vector<int> > (100000);
    for(int i=0; i<prime.size(); i++){
        for(int j=i+1; j<prime.size(); j++){
            int a = prime[i];
            int b = prime[j];
            if(isneighbour(a,b )){
                ver[a].push_back(b);
                ver[b].push_back(a);
            }
        }
    }
}
int main(){
int t;
cin>>t;
//prime =vector<int> (10000,-1);
for(int i=1000; i<=9999;i++){
    if(isPrime(i)) prime.push_back(i);
}
buildGraph();
while (t--)
{ int v1,v2;
  cin>>v1>>v2;

   vis= vector<int> (100000,0);
   dis =vector<int> (100000,-1);
    bfs(v1);
    if(dis[v2]==-1) cout<<"Impossible\n";
    else cout<<dis[v2]<<"\n";
}
    return 0;
}