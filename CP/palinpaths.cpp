#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int> > vec(n, vector<int>(m, 0));
        int p[n+m-1],q[n+m-1];
        memset(p,0,sizeof(p));
        memset(q,0,sizeof(q));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                int num;
                cin>>num;
                vec[i][j]=num;
                if(num){
                    q[i+j]++;
                }else{
                    p[i+j]++;
                }
            }
        }
         int k = (m+n-2)/2; int zeroc=0, onec=0, tc=0;
         if((n+m-1)%2==0)k=k+1;
         for (int  i = 0; i <k; i++) {   
             onec = q[i]+q[n+m-2-i];
             zeroc = p[i] +p[n+m-2-i];

            if(onec<=zeroc) tc+=onec;
            else tc+=zeroc;
         
     }
        cout<<tc<<"\n";
         
        

        // for (int i = 0; i < n+m-1; i++)
        // {   cout<<"==========="<<"\n";
        //     cout<<p[i]<<" "<<q[i]<<"\n";
        // }
        

        // for (int i = 0; i < n; i++){
        //   for (int j = 0; j < m; j++){
        //         cout<<vec[i][j]<<" ";
        //     }cout<<"\n";
        // }
    }

    return 0;
}