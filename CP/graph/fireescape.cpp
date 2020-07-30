#define REP(i,n) for(int i=0, i<n; i++)
#include <iostream>
#include <bits/stdc++.h>
#include <vector>


using namespace std;
vector<vector<int> > ver;
vector<int> vis;
int cc_cnt=0;
void dfs(int node){
    vis[node]=1;
    for(auto it: ver[node]){
        if(!vis[it]){
            dfs(it);
            cc_cnt++;
        }
            
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        ver = vector<vector<int> > (n);
        vis = vector<int> (n,0);
        int v1,v2;
        while (m--){
            cin>>v1>>v2;
            --v1;--v2;
        ver[v1].push_back(v2); 
        ver[v2].push_back(v1); 
        }
        int cc=0,j=1; int totval=1;
        for(int i=0; i<n; i++){
        if(!vis[i]){
            dfs(i);
            //cout<<cc_cnt<<" in conn comp \n";
            totval*=(cc_cnt+1);
            cc++;
            cc_cnt=0;
        }
     }
     cout<<cc<<" "<<totval<<"\n";
    // cout<<cc<<"\n";
    //     for(int i=0; i<n; i++){
    //         cout<<vis[i]<<" ";
    //     }
    // }
    
}
return 0;
}