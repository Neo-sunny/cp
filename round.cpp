#include <iostream>
using namespace std;

int main(){
	
	int n,m;
	cin>>n>>m;
	int com[n+1];
	int prob[m];
	int c,p;
	for (int i = 0; i < n; ++i)
	{
		cin>>com[i];
	}
	for (int i = 0; i < m; ++i)
	{
		cin>>prob[i];
	}
	int count =0;

	for (int i = 0,j=0; i < m; ++i)
	{
		if(prob[i]>=com[j]){
			count++;j++;
		}
	}
	cout<<(n-count)<<"\n";
	return 0;

}
