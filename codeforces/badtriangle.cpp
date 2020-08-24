#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int len,m;
    cin>>len;m=len;
    vector<int> nums(len);
    int i=0;
    while(len--){
       // int val;
        cin>>nums[i++];
       // nums.push_back(val);
    }
    int flag=0;
    for(int i=0; i<=m-3;i++){
        for(int j=i+1; j<=m-2;j++){
            for(int k=i+2; k<=m-1;k++){
                 if( ((nums[i]+nums[j])<=nums[k])  ||  ((nums[j]+nums[k])<=nums[i]) ||     ((nums[k]+nums[i])<=nums[j])    ){
                    cout<<(i+1)<<" "<<(j+1)<<" "<<(k+1)<<"\n";
                    flag++;break;
               }
        } 
        if(flag) break;
     }     
        if(flag) break;
    }
    if(!flag)cout<<-1<<"\n";
}
    return 0;
}