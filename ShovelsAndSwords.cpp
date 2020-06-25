#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int st, dm;
		cin>>st>>dm;
		int total = (st+dm)/3;
		int emar= min(total,min(st,dm));
		
		cout<<emar<<"\n";
	}

return 0;
}