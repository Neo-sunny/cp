#include <iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;
lli bsearch();
lli bsearch();
lli a,b,c,k;
int main() {
int t;
cin>>t;
while(t--){
	cin>>a>>b>>c>>k;
	lli x = bsearch();
	cout<<x<<"\n";
}

	return 0;
}
lli value(lli n){
	return a*n*n +b*n + c;
}
lli bsearch(){
	if(c>=k) return 0;
	lli L=1;
	lli H=ceil(sqrt(k));

	while(L<=H){
		lli mid = (L+H)/2;

		lli val = value(mid);
		lli lessval = value(mid-1);
		if(val>=k && lessval<k){ return mid;}

		if(val<k) L = mid+1;
		else H = mid-1;
	}

}
