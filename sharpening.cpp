#include <iostream>
using namespace std;

int main()
{
int t;
	cin>>t;
	while(t--){
		int size;
		cin>>size;
		int arr[size];
		for (int i = 0; i < size; ++i)
		{
			cin>>arr[i];
		}

		int left=-1;
		for (int i = 0; i < size; ++i)
		{
			if(arr[i]<i){break;} 
			left=i;
		}
			
		int j=0,right=size;
		for (int i = size-1; i >= 0; i--)
		{
			if(arr[i]<j++) {break;}
			right=i;
		}


		cout<<"left:"<<left<<"right:"<<right<<"\n";
		if(left>=right) cout<<"Yes"<<"\n";
		else cout<<"No"<<"\n";
	}
	return 0;
}
//1
//0 1
//0 1 1 0
//12 10 8