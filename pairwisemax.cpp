#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		if(a==b && b==c){
			cout<<"YES"<<"\n";
			cout<<a<<" "<<b<<" "<<c<<"\n"; 
		}
		else if(y==z &&(x<z && x<y)){
			cout<<"YES"<<"\n";
			cout<<a<<" "<<a<<" "<<c<<"\n"; 
		}
		else if(x==y &&(x>z && y>z)){
			cout<<"YES"<<"\n";
			cout<<a<<" "<<b<<" "<<c<<"\n";
		}
		else if(y==z &&(x>y && x>z)){
			cout<<"YES"<<"\n";
			cout<<a<<" "<<b<<" "<<c<<"\n";
		}else{
			cout<<"NO"<<"\n";	
		}
	}

	return 0;
}

