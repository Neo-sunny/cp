#include <iostream>
using namespace std;

int main()
{

	int t;
	cin>>t;
	while(t--){
		string num;int len;
		cin>>len>>num;
		int odd=0;
		for(char c:num){
			if( (c -'0')&1 )odd++;
		}	
		if(odd<=1){cout<<-1<<"\n";continue;}

		int count =0;
		for(char c:num){
			if( (c -'0')&1 ){ cout<<c; count++; }
			if(count==2){cout<<"\n";break;}
		}
	}
	return 0;
}