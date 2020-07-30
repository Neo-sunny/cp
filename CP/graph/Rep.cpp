#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// No. of Nodes: N
// No. of Edges: M

int main(){
    int N,M;
    cin>>N>>M;
    vector<int> edges[N+1];
    int a,b;int m1=M;
    while (M--)
    {  cin>>a>>b;
        edges[a].push_back(b);
        edges[b].push_back(a);
     }
     
     for (int i = 0; i < N; i++)
     {  
         
     }
     
    return 0;
}



