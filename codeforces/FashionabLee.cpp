#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int side=0;
		cin>>side;
		if(side<=3)
			cout<<"NO"<<"\n";
		else
			cout<<"YES"<<"\n";
	}

	return 0;
}