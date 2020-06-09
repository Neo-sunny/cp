#include <iostream>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--){
    long long x, y, m,n;
    cin>>x>>y;
    m=x;n=y;
    //if(x==y)
    //    cout<<0;
    long count=0;
     if(x<y){
        x = n;
        y = m;
     }

        if(x%2==0 || x%4==0 || x%8==0){
            while(x>y){
            if(x%8==0 && (x>>3)>=y){
                x = x>>3;
                count++;
            }else{
                break;
            }    
            
 //           if(x==y) break;
         } 

 //        if(x==y){ cout<<"count::"<<count<<"\n";}
 //        if(x<y){ x =m; count=0;}
 //        if(x!=0){  x = x<<3; count=0;  cout<<"currently x is inside if ::"<<x;}
 //        else{ x=m; cout<<"currently x is::"<<x; } 
         while(x>y){
             if(x%4==0 && (x>>2)>=y){
                x = x>>2;
                count++;
            }else{
                break;
            } 
         }
 //        if(x==y){ cout<<"count::"<<count<<"\n";}
//         if(x<y){ x =m; count=0;}
         while(x>y){
            if(x%2==0){
              x = x>>1;
             count++;
            }else{
                break;
            }
            
           // if(x==y) break;
         }

        if(x==y){ cout<<count<<"\n";}
        else cout<<-1<<"\n";
        // if(x==y){ cout<<count; return 0;}
        }else if(x==y){ cout<<0<<"\n";}

        else{
            cout<<-1<<"\n";
        }        
    }    

    return 0;
}