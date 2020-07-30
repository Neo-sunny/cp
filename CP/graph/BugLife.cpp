#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > ver;
vector<int> vis;
vector<int> col;

bool dfs(int node, int val){
    vis[node]=1;
    col[node]=val;
    for(auto it: ver[node]){
        if(!vis[it]){
             if(dfs(it, 1^val)==false)
                return false;
        }
        else{
             if(col[it]==col[node])
                return false;
     }          
    }
    return true;
}
int main(){

int v, i,t,sc;
    cin>>t;sc=1;
    while(t--){
    cin>>v>>i;
    ver = vector<vector<int> > (v);
    vis = vector<int> (v,0);
    col = vector<int> (v,0);
    int v1,v2;
    while (i--){
        cin>>v1>>v2;
        --v1;--v2;
        ver[v1].push_back(v2); 
        ver[v2].push_back(v1);    
    
    }
     bool yesorno;
    for(int i=0;i<v;i++){
        if(!vis[i]){
         yesorno =  dfs(i,1);
        }
        if(!yesorno) break;
    }
   
    if(yesorno){
        cout<<"Scenario #"<<sc++<<":\n";
        cout<<"No suspicious bugs found!"<<"\n";
    }else{
        cout<<"Scenario #"<<sc++<<":\n";
        cout<<"Suspicious bugs found!"<<"\n";
    }
    }
    
    
    

    

    return 0;
}