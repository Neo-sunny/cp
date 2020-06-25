#include <iostream>
#include <set>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--){
	long num;
	cin>>num;
	set<int> used;
	int i=2;
	for(; i*i<=num;++i){
		if(num%i==0 && !used.count(i)){
			used.insert(i);
			num/=i;
			break;
		}
	}
	for (; i*i < num; ++i)
	{
		if(num%i==0 && !used.count(i)){
			used.insert(i);
			num/=i;
			break;
		}
	}

	if ( used.size()<2 || used.count(num) || num==1 )
	{
		cout<<"NO"<<"\n";
	}
	else{
		used.insert(num);
		cout<<"YES"<<"\n";
		for (auto it : used) cout << it << " ";
		cout<<"\n";	
	}
}
return 0;
}