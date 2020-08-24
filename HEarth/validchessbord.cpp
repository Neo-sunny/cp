#include <bits/stdc++.h>
using namespace std;
const int N = 1E3 + 5;
string mat[N];
    bool f(int x, int y, int n, int m) {
       int bval =mat[x][y];
       if( (x+y)%2==0){
         for(int i = x; i < x + 8; i ++) {
            for(int j = y; j < y + 8; j ++) {
                if( (i+j)%2==0 && mat[i][j]!=bval) return 0;
                else continue;
                if(mat[i][j]==bval) return 0; 
                else continue;            
            }
        }
       }else{
        for(int i = x; i < x + 8; i ++) {
           for(int j = y; j < y + 8; j ++) {
                if( (i+j)%2!=0 && mat[i][j]!=bval) return 0;
                else continue;
                if(mat[i][j]==bval) return 0; 
                else continue;                
            }
        }
       }
        
        return 1;
    }
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i ++)
        cin >> mat[i];
    int cnt = 0;
        for(int i = 0; i < n; i ++) {
            for(int j = 0; j < m; j ++) {
                if(i + 8 <=n && j + 8 <=m && f(i, j, n, m))
                    cnt ++;
            }
        }
        cout << cnt;
        return 0;
    }