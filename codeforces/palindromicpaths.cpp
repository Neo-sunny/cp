#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin>>t;
    while(t--){
        int n,m,tc=0;
        cin>>n>>m;
        vector<vector<int> > vec(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin>>vec[i][j];
            }
        }
        int k=0;
        while (k<n && k<m)
        {   int i=0, j=k;
            int p = n-i-1, q=m-j-1;
            int c0=0, c1=0;
            if(i+j==p+q) break;
            else{
                while(i<=k){
                    if(vec[i][j]==0) c0++;
                    else c1++;
                    
                    i++;j--;
                }
                if(c0<=c1) tc+=c0;
                else tc+=c1;
            }
            k++;
        }
        cout<<"Min change"<<tc<<"\n";




        // for (int i = 0; i < n; i++){
        //   for (int j = 0; j < m; j++){
        //         cout<<vec[i][j]<<" ";
        //     }cout<<"\n";
        // }
    }

    return 0;
}