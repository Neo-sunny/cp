#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		long n,x,m;
		cin>>n>>x>>m;
		//long arr[n+1];
		long min=x,max=x;
		//cout<< min<<max;
		while(m--){
			long l,r;
			cin>>l>>r;
			if( (l>=min &&  l<=max ) || (r>=min && r<=max) || (l<min && r>max) ){
				if(l<min){
					min =l;
				}
				if(r>max){
					max = r;
				}
			}
		}

		cout<< (max-min+1)<<"\n";
	}

return 0;
}