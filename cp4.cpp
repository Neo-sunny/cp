#include<bits/stdc++.h>
using namespace std;

//#define int long long;
//void sieve(int N, vector<int> &prime);
int mod = 1000000007;
int f[1000001];

int pow(int num, int p);
int preComputeFact();
int fact(int num);

int fact(int num){
	int fact=1;
	for (int i = 1; i <= num; ++i)
	{
		fact*=i;
	}
}
int preComputeFact(){
	
	f[0]=1;
	for (int i = 1; i <= 1000001; ++i)
	{
		f[i]= (f[i-1]*i)%num;
	}
}
int pow(int num, int p){
    int ans =1;
    while(p){
        if(p&1){
            p = p-1;
            ans = (ans*num)%mod;
        }else{
            num = (num*num)%mod;
            p=p/2;
        }
    }
    return ans;
}


int pascalTriangle(){
	
}


void sieve(int N, vector<int> &prime){
	int sieve[N+1];
	for(int i=2; i<=N; i++){
		sieve[i]=1;
	}
	sieve[0]=sieve[1]=0;

	for (int i = 0; i*i<=N; ++i)
	{
		if(sieve[i]){
			for (int j = i*i; i<=N; j+=i)
			{
				sieve[j]=0;
			}
		}
	}

	for (int i = 2; i <= N; ++i)
	{
		if (sieve[i]==1)
		{
			prime.push_back(i);
		}
	}
}


signed main(){
	vector<int> prime;
	int l,r;
	cin>>l>>r;
	sieve(sqrt(r), prime);
	int range[r-l+1];
	for (int i = l; i <r; ++i)
	{
		range[i-l]=1;
	}

	for(auto it:prime){
		int low = (l/it);
		low = low * it;
		if(l%it!=0) low+=it;
		for(int i=low; i<=r; i++){
			range[i-l]=0;
		}
	}

	for (int i = l; i <r; ++i)
	{
		if(range[i-l]==1) cout<<i+l;
	}
	return 0;
}