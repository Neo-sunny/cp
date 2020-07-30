#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int x;
    cin>>x;int t=1;
    if(x){
        cout<<"x is not ZERO";
    }else{
        cout<<"X is ZERO";
    }
    while(x--){
        cout<<t++<<"\n";
    }
    return 0;
}