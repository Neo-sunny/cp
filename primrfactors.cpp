#include <iostream>
using namespace std;
//int max = 100000000;
int size = 100; 
int sieve[101];
void primefactors(int n);
void createSieve();
int main()
{
	//primefactors(99);
	createSieve();
	return 0;
}
void primefactors(int n){
	
	for(int i=2; i*i<=n;i++){

		while(n%i==0){
			//cout<<"NUM is:"<<n<<"\n";
			cout<<i<<"*";
			n=n/i;
		}

	}

	if(n!=1)
		cout<<n;
}


void createSieve(){
	for (int i = 1; i <=size ; ++i)
	{
		sieve[i]=i;
	}

	for (int i = 2; i*i <=size; ++i)
	{	
		//if(i>2) break;
		if(sieve[i]==i){
			for (int j = i*i; j <= size; j+=i)
			{
				if(sieve[j]==j) sieve[j]=i;
			}
		}
	}


	for (int i = 1; i <= size; ++i)
	{
		cout<<sieve[i]<<" ";
	}

}