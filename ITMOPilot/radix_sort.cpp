#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

void radix_sort(vector<pair<int, int>> &a){
    int n = a.size();
{
    vector<int> cnt(n);
    for (auto x : a) {
        cnt[x.second]++;
    }
    vector<pair<int, int>> a_new(n);
    vector<int> pos(n);
    pos[0]=0;
    for (int i = 1; i < n; i++) {
        pos[i]= pos[i-1] +cnt[i-1];
    }
    
    for(auto x:a){
        int i = x.second;
        a_new[pos[i]] = x;
        pos[i]++;
    }
   
    a = a_new;
}
    {
        vector<int> cnt(n);
    for (auto x : a) {
        cnt[x.first]++;
    }
    vector<pair<int, int>> a_new(n);
    vector<int> pos(n);
    pos[0]=0;
   
    for(auto x:a){
        int i = x.first;
        a_new[pos[i]] = x;
        pos[i]++;
    }
    
    a = a_new;
    }

}
int main() {
	vector<pair<int,int>> a(6);
	a[0]={ 0,1};a[1]={ 1,1};
	a[2]={ 0,3};a[3]={ 4,1};
	a[4]={ 2,0};a[5]={ 3,2};
	
	radix_sort(a);
	return 0;
}