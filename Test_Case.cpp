#include<bits/stdc++.h>
using namespace std;
#define int     long long
#define test_max 10
#define n_max 100000

void c_p_c()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

}

int32_t main(){
   srand(time(NULL));
   int t = rand() % test_max + 1; 
   for (int i=1; i<=t; i++){
        int n = (rand() % n_max) +1;
       int ans=0;
   for(int i=1;i<=n/2;++i){
     ans+=(n/i)-1;
   } 
   for(int a3=1;a3<=n/2;++a3){
     for(int k1=2;k1<=n/a3;++k1){
       ans+=((n/a3-1)/k1);
     }
   }
   cout<<"Input: "<<n<<" Output: "<<ans<<'\n';
   }
  
 
  return 0;
}
