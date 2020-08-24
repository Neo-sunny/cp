#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<vector<int> > ver;
vector<vector<int> > LCA;
vector<int> height;

void dfs(int node, int par){
    LCA[node][1]=par;
    for(auto ch: ver[node]){
        if(ch!=par){
            height[ch]= height[node]+1;
            dfs(ch,node);
        }
    }
}

int main(){
int v,e;
cin>>v>>e;
ver =vector<vector<int> > (v);
int maxN =log2(v);
LCA = vector<vector<int> > (v, vector<int>(maxN+2,-1));  
height = vector<int> (v,0);
for(int i=0; i<v; i++){
    LCA[i][0]=i;
}
int v1,v2;
while(e--){
    cin>>v1>>v2;
    --v1;--v2;
    ver[v1].push_back(v2);
    ver[v2].push_back(v1);
}

dfs(0,-1);
//for(auto ind:height){ cout<<ind<<" ";}
for(int i=2; i<=maxN+2; i++){
   for(int j=0; j<v; j++){
       if(LCA[j][i-1]!=-1){
           int par = LCA[j][i-1];
           LCA[j][i] = LCA[par][i-1];
       }
   }
}
int a,b;
cin>>a>>b;
if(height[b]>height[a]) { swap(a,b); }
int d = abs(height[a]-height[b]);
while(d){
    int i = log2(d);
    a = LCA[a][i];
    d-= (1<<i);
}
if(a==b) cout<<"LCA: "<<a<<"\n";
else{
int i=maxN+2;
    for(; i>0; i--){
        if(LCA[a][i]!=-1 && (LCA[a][i]!=LCA[b][i] )  ){
            a = LCA[a][i]; 
            b = LCA[b][i];
        }
    }

    cout<<"LCA: "<<LCA[a][i]<<"\n";
}
// for(int i=0; i<v; i++){
//     for(auto it:LCA[i]) cout<<it<<" ";
//     cout<<"\n";
// }
    return 0;
}