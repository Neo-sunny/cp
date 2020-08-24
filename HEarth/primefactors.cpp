#include <iostream>
#include <cstring> 
#include <bits/stdc++.h>
using namespace std;
long maxv = 1000001;

int main()
{
int sieve[maxv];
int pfactors[maxv];
memset(sieve, 1,sizeof(sieve));
sieve[0]=0;sieve[1]=0;
for(int i=2;i<=maxv;i++){ sieve[i]=1;}


for(int i=2; i<maxv;i++){
    if(sieve[i]==1){
        for(int j=i; j<maxv; j+=i){
            if(sieve[j]==1){
				sieve[j]=i;
				pfactors[i]++;
			}
			
        }
    }
}

int t;
cin>>t;
while(t--){
	long num;
	cin>>num;
		cout<<pfactors[num]<<"\n";
	}
	return 0;
}