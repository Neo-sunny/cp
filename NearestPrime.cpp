#include <iostream>
using namespace std;
int maxv = 101;
int main()
{
int sieve[maxv];

for(int i=1;i<=maxv;i++){ sieve[i]=i;}

for(int i=2; i*i<=maxv;i++){
    if(sieve[i]==i){
        for(int j=i*i; j<=maxv; j+=i){
            if(sieve[j]==j) sieve[j]=i;
        }
    }
}

for (int i = 1; i <=maxv; ++i)
{
    cout<<sieve[i]<<" ";
}

int t;
cin>>t;
while(t--){
    int num;
    cin>>num;
    
    int l=0,r=0;
    while(1){
        if(sieve[num+r]==num+r){ cout<<num+r<<"\n"; break;}
        else if(sieve[num+l]==num+l){cout<<num+l<<"\n"; break;}
        l++;r--;
    }
}

    return 0;
}