#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct edge{
    int a; int b; int w;
};
edge ar[100000];
int par[10001];
bool comp(edge a, edge b){
    if(a.w<b.w)
        return true;
    return false;
}
int find(int a){
    if(par[a]==-1) return a;

    return par[a] = find(par[a]);
}
void merge(int a, int b){
    par[a]=b;
}
int main(){

int n,m,a,b,w;
cin>>n>>m;
for(int i=1; i<=n; i++){ par[i]=-1;}

for(int i=0; i<m;i++){
    cin>>ar[i].a>>ar[i].b>>ar[i].w;
}
    sort(ar, ar+m,comp);
int sum =0;
for(int i=0; i<m;i++){
    int pa = find(ar[i].a);
    int pb = find(ar[i].b);
    if(pa!=pb){
        merge(pa,pb);
        sum+=ar[i].w;
    }
}

cout<<sum<<"\n";
    return 0;
}