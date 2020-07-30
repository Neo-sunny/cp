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
            return dfs(it, 1^val);
        }
        else{
             if(col[it]==col[node])
                return false;
     }
            
    }
    return true;
}
int main(){
     int v, e;
    cin>>v>>e;
    ver = vector<vector<int> > (v);
    vis = vector<int> (v,0);
    col = vector<int> (v,0);
    int v1,v2;
    while (e--)
    {   cin>>v1>>v2;
        --v1;--v2;
        ver[v1].push_back(v2); 
        ver[v2].push_back(v1);        
    }
    bool yesorno = dfs(0,1);
    cout<<yesorno<<"\n";
    return 0;
}