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
   int t = rand() % t_max + 1; 
   for (int i=1; i<=t; i++)
        printf("%d\n", (rand() % n_max) +1);
 
  return 0;
}
