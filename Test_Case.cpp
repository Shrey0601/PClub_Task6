#include<bits/stdc++.h>
using namespace std;
#define int     long long
#define mod     1000000007  
int power(int a,int b) {int res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
#define test_max 10
#define n_max power(10,5)

void c_p_c()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

}

int32_t main(){
   srand(time(NULL));
    
   for (int i=1; i<=test_max; i++)
        printf("%d\n", (rand() % n_max) +1);
 
  return 0;
}