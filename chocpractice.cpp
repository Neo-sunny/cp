#include <iostream>
using namespace std;
 
int main()
{
	int b,n;
	cin>>b;
	int time[b];
	for (int i = 0; i < b; ++i)
	{
		cin>>time[i];
	}
	int l=0,r=b-1,i=0,j=b-1,t1=0,t2=0,c1=0,c2=0;
 
	while(l<=r){
		if(time[l]<=time[r]){
			t1+=time[l++]; c1++;
		}else{
			t2+=time[r--]; c2++;
		}
	}
 
	cout<<c1<<" "<<c2;
 
	return 0;
}