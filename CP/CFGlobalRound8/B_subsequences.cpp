#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    long num ;
    string s="codeforces\n";
   // string s= "cod";
    long min[10];
    //memset(min, 1, sizeof(min));
    fill_n(min, 10, 1);
    cin>>num;
    if(num==1)
        cout<<s;
    else {  
    long val =1;int i=0;
    while(val<num){
        val/=min[i];
        min[i]++;
        val*=min[i];
        i++;
        if(i==10)
            i=0;
    }
    string news="";
    int mul=1;
    // for (int i = 0; i < 10; i++)
    // {
    //     mul*=min[i];
    // }
    // cout<<mul;
    
    for (int i = 0; i < 10; i++)
    {   char ch = s[i];
        while (min[i]--)
        {
            news+=ch;
        }
        
    }
    cout<<news<<"\n";
    

}
    return 0;
}