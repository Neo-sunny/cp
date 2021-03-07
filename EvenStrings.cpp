#include<bits/stdc++.h>
#define ll long long 
#define ALPHABET_SIZE 26

using namespace std;

int main(){
  std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();

    int n,k=2;
   // string s="ababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabbababaabb";
string s="aabccbbcaa";
    n= s.size();
ll cnt =0;
vector<int> f(ALPHABET_SIZE,0);
vector<vector<int>> v;
v.push_back(f);
for(int i=1; i<=n; i++){
    f[s[i-1]-'a']++;
    v.push_back(f);
}

for(int i=0; i<k; i++){
    int start= i;
    int end = (n/k)*k+i;
    if(end >n )end-=k; 
    for(int j=start; j<=end; j+=k){

        for(int d=j+k; d<=min(end, ALPHABET_SIZE*k+j); d+=k){
            bool flag = true;
            for(int idx=0; idx<ALPHABET_SIZE; idx++){
                if( abs(v[j][idx] -v[d][idx])!=k && abs(v[j][idx] -v[d][idx])!=0 ){
                    flag=false;
                }
            }

            if(flag){
                cnt++;
            }
        }
    }
}

cout<<cnt<<"\n";
std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "[µs]" << std::endl;
}