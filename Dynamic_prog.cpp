#include <iostream>
using namespace std;

int main()
{



	return 0;
}

//==============Recursion=====================
int fib(int n){

	if(n<=1)
		return n;

	return fib(n-1)+fib(n-2);
}

int frog1(int ind){
	if(ind== n-2){ return 0;}

	int costL = abs(arr[ind]- arr[ind+1]) +frog1(ind+1);
	int costR = INT_MAX;
	if(ind+2<n-1){
		costR = abs(arr[ind]+arr[ind+2]) +frog1(ind+2);
	}

	return min(costL,costR);
}

int frog2(int ind){
	if(ind ==n-1)
		return 0;

	int mincost = INT_MAX;
	for (int i = ind+1; i < min(ind+k,n-1); ++i)
	{
				mincost = min( abs(arr[i]-arr[i+1]) + frog2(i),mincost );
	}		

	return mincost;
}

//============DP=======================
/*
	Initialize all vectors with -1 and take care of indexes
	as all the problems here are not compiled.

*/
int fibdp(int n, vector<int> &dp){
	if(n<=1) return n;

	if(dp[n]!=-1) return dp[n];

	dp[n] = fibdp(n-1,dp)+ fibdp(n-2,dp);

}

int frog1(int ind, vector<int> &dp){
	if(ind== n-2){ return 0;}

	if(dp[ind]!=-1) return dp[ind];
	int costL = abs(arr[ind]- arr[ind+1]) +frog1(ind+1);
	int costR = INT_MAX;
	if(ind+2<n-1){
		costR = abs(arr[ind]+arr[ind+2]) +frog1(ind+2);
	}

	return min(costL,costR);
}

int frog2(int ind, vector<int> &dp){
	if(ind ==n-1)
		return 0;

	if(dp[ind]!=-1) return dp[ind];
	int mincost = INT_MAX;
	for (int i = ind+1; i < min(ind+k,n-1); ++i)
	{
				mincost = min( abs(arr[i]-arr[i+1]) + frog2(i),mincost );
	}		

	return dp[ind]=mincost;
}

int minc(int i){
	if(i==n) return 1;

for(int i=ind+1; i<m; i++){
	min ( sum - arr[m], minc(i+1))
}
}