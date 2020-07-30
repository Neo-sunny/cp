#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<vector<int> > ver;
vector<int> vis;
vector<int> len;
void dfs(int node, int val);

void dfs(int node, int val){
    vis[node]=1;
    len[node]=val;
    for(auto it: ver[node]){
        if(!vis[it])
            dfs(it, val+1) ;
    }
}
int main(){

    int n;
    cin>>n;
    int v1,v2;
    ver = vector<vector<int> > (n);
    len = vector<int> (n);
    int edges = n-1;
    vis = vector<int> (n,0);
    while (edges--)
    { cin>>v1>>v2;
        --v1;--v2;
        ver[v1].push_back(v2); 
        ver[v2].push_back(v1); 
    }
    dfs(0,0);
    int q,q1;
    cin>>q;
    cin>>q1;
    int min=--q1;
    q--;
    while (q--)
    {   int num;
        cin>>num;--num;
        if(len[num]<len[min]) min= num;
        if(len[min]==len[num]){
            if(num<min)
                min=num;
        }
    }
    cout<<++min<<"\n";


    // for(int i=1; i<n; i++){
    //     int min =10000;
    //     if(len[i].size()==0) continue;
    //     else{
    //         for (auto i : len[i])
    //         {
    //             if(i<min)min =1;
    //         }
            
    //     }
    //     cout<<min<<"\n";
    //     break;
    // }

    return 0;
}