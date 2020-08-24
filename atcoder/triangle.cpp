#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
int n,m;
cin>>n;m=n;
vector<long> nums(n);int i=0;
while(n--){ cin>>nums[i++];}
int cnt=0;
for(int i=0; i<m-2;i++){
    for(int j=i+1; j<m-1; j++){
        for(int k=j+1; k<m; k++){
            int a= nums[i];
            int b= nums[j];
            int c= nums[k];
            if( (a!=b) &&  (b!=c) && (c!=a) ){
                if( (a+b>c) && (b+c>a) && (c+a>b) ){
                    cnt++;
                }
            }
        }
    }
}
cout<<cnt<<"\n";
    return 0;
}