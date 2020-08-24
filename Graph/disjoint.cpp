#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int par[100];
int main(){

    return 0;
}

int find(int node){
    if(node == par[node])
        return node;
   return find(par[node]);     
}

int find1(int a){
    while(par[a]>0) a =par[a];

    return a;

}
int findrec(int a){
    if(par[a]<0)
        return a;
    return findrec(par[a]);    
}
int unionfn(int a, int b){
    int par_a = find(a);
    int par_b = find(b);
    if(par_a==par_b) return -1;
    else 
    par[a]=b;
}

void unionfn1(int a, int b){
    par[a]+=par[b];
    par[b] =a;
}
// path compression for find

int findpc(int a){
    vector<int> v;
    while(par[a]>0){
        v.push_back(a);
        a= par[a];
    }
    for(int i=0; i<v.size(); i++){
        par[v[i]]=a;
    }
}
int findpcrec(int a){
    if(par[a]<0) return a;

    int x = find(par[a]);
    par[a] = x;
    return x;
    
}