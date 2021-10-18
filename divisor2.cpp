#include<bits/stdc++.h>
using namespace std;

int val=0;
void primefact(int N){

      for(int i=2;i*i<=N;i++){
         if(N%i==0){
              int cnt=0;
              while(N%i==0){
                    cnt++;
                    N/=i;
              }
              val+=cnt;
              
         }
        
      }
       if(N>1){
            val++;
         }
}


void solve(){  
    
     int n,x,y;
     cin>>n>>x>>y;
     int ans=0;

     val=0;
     if(x>=0&&y>=0){
          while(n%2==0){
             ans+=x;
             n/=2;
          }
          primefact(n);
          ans+=val*y;
     }
     else if(x>=0&&y<0){
          
          if(n%2){
             ans=y;
          }

          while(n%2==0){
             ans+=x;
             n/=2;
          }

     }
     else if(x<0&&y>=0){
          
          if(n%2==0) ans+=x;

           while(n%2==0){ 
             n/=2;
          }

          primefact(n);
          ans+=val*y;


     }
     else{

        if(n%2==0){
             ans=x;
        }  
        else{
            ans=y;

        }
     }


cout<<ans<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}