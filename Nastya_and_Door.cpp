#include <iostream>
using namespace std;

int main(){

	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
    		cin >> a[i];
		}
		bool b[n] ;
		memset(b,0,sizeof(b));
		for(int i=1; i<n-1; i++){
			if(a[i]>a[i-1] && a[i]>a[i+1] )
					b[i]=1;
		}

//		cout<<"Array b"<<"\n";
//		for(int i=0; i<n; i++){
//			cout<<b[i]<<" ";
//		}
//		cout<<"\n";

			int maxPeak=0;
		for(int i=1; i<k-1;i++){ if(b[i]) maxPeak++;}
//			cout <<maxPeak<<"\n";

			int l=1, r=k-1;
			int peak = maxPeak;
			int minIndex = 1;

			for(int i=1; i<=(n-k); i++){
				if(b[l]) peak--;
				if(b[r]) peak++;
//				cout<<l<<" "<<r<<" "<<peak<<"\n";
				l++;r++;
				if(peak>maxPeak){
					maxPeak = peak;
					minIndex = i+1;	
				}
			}

			//cout<<"result "<<maxPeak+1<<" "<<minIndex<<"\n";
			cout<<maxPeak+1<<" "<<minIndex<<"\n";

		/*
		
		int minIndex=n+1;

		int peak=0, index=0;
		for(int i = 0; i <= n-k; ++i){
				
			for(int j=i+1; j<=i+k-2; j++){
				if(a[j]>a[j-1] && a[j]>a[j+1]  ){
					peak++;
					index=i;
				}
			}
			if(maxPeak<(peak+1)){ maxPeak=peak+1; minIndex =index;}
			//if(minIndex>index ){ minIndex =index;}
			peak=0, index=0;
		}

		cout<<maxPeak<<" "<<minIndex+1<<"\n";
		*/
	}

	return 0;
}

//8 6
//1 2 4 1 2 4 1 2