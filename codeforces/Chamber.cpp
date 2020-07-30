#include <iostream>
#include <queue> 
using namespace std;

int main() {
	int n,x;
	queue<int> q;
	cin>>n>>x;
	int s = n;
	int arr[n+1];int i=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		q.push(i);
	}
	for (int i = 0; i < n; ++i)
		{
			cout<<arr[i];
			cout<<q.pop();
		}	

		return 0;
}