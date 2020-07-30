#include <iostream>
#include <queue> 
using namespace std;

int main() {
	int n,x;
	queue<int> q;
	cin>>n>>x;
	int arr[100005];int i=0;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		q.push(i);
	}
	int k=0;
	while(k<x){

		int max=-1, maxind,a[x+1];
		int size = q.size();
		for(int i=0; i<min(x,size); i++){
			a[i]=q.front();q.pop();
			if(arr[a[i]]>max){
				max=arr[a[i]];
				maxind = a[i];
			}
		}
		cout<<maxind+1<<" ";
		for(int j=0; j<min(x,size);j++ ){
			if(a[j]==maxind) continue;
			else{
				if(arr[a[j]])arr[a[j]]--;
				q.push(a[j]);
			}
		}
		k++;
	}

	return 0;
}