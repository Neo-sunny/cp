#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int s,x,n,m;
	cin>>s>>x>>n;
	m=n;int i=0;
	vector<int> days(n);
	while(n--){
		cin>>days[i++];
	}
	vector<pair<int,int> > exc;
	n=m;i=0;int val;
	while(n--){
		int d1= days[i++];
		cin>>val;
		exc.push_back({d1,val});
	}
sort(exc.begin(), exc.end()); 
int cnt=0;i=0;
 while(s>0){
     cnt++;
 if(exc[i].first==cnt){
	 s-=exc[i].second;
     i++;
 }
 else s-=x;
 //cnt++;
 }
 cout<<cnt<<"\n";

//	for(auto it:exc){cout<<it.first<<" "<<it.second;}
//for(int i=0; i<2; i++){ cout<<exc[i].first<<" "<<exc[i].second;}
}

