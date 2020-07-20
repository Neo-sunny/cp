#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> ord;
vector<int> vis;
vector<vector<int> > ver;
void dfs(int node)
{
    vis[node]=1;
    for(auto to: ver[node]){
        if(!vis[to])
            dfs(to);
    }
    ord.push_back(node);
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    { int n,m;
        cin>>n>>m;
        ver =vector<vector<int> > (n);
        vector<pair<int,int> > edge;

        while (m--)
        {   int c,e1,e2;
            cin>>c>>e1>>e2;
            --e1;--e2;
            if(c==1){
                ver[e1].push_back(e2);
            }
            edge.push_back( {e1,e2} );
        }
            ord.clear();
            vis = vector<int>(n);
            for (int i = 0; i < n; i++)
            {   if(!vis[i])
                    dfs(i);
            }
            vector<int> pos(n);
            reverse(ord.begin(), ord.end());
            for (int i = 0; i < n; i++)
            {   pos[ord[i]]=i;
            }
            bool bad = false;
            for (int i = 0; i < n; i++)
            {
                for(auto j: ver[i]){
                    if(pos[i]>pos[j])
                        bad =true;
                }
            }
            if(bad){ cout<<"NO"<<"\n";}
            else{
                cout<<"YES"<<"\n";
                for(auto [x,y] :edge ){
                    if(pos[x]<pos[y]){
                        cout<<x+1<<" "<<y+1<<"\n"; 
                    }else{
                        cout << y + 1 << " " << x + 1<<"\n";
                    }
                }
            }
            
             

    }
    
    return 0;
}   