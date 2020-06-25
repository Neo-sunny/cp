#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		long a,b,n;
		cin>>a>>b>>n;
		int count=0;
		while( (a<=n)&&(b<=n) ){
			if(a<=b){
				a+=b;
				count++;
			}else{
				b+=a;
				count++;
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}