#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b);

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int g = gcd(a,b);
	if(c%g==0)
		cout<<"Yes"<<"\n";
	else
		cout<<"No"<<"\n";

	return 0;
}

int gcd(int a, int b){

	if(a==0)
		return b;
	if(b==0)
		return a;
	if(a==b) return a;
	if(a<b)
		return gcd(a, b%a);
	else 
		return gcd(a%b,b);

}