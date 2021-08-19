#include<bits/stdc++.h>
using namespace std;


void c_p_c()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

}


void solve(){
int n;
cin>>n;
int ans=0;
for(int i=1;i<=n/2;++i){
  ans+=(n/i)-1;
} 
for(int k2=1;k2<=n/2;++k2){
   for(int k1=2;k1<=n/k2;++k1){
     ans+=((n/k2-1)/k1);
   }
}

cout<<ans; 
 
 return;	
}


int32_t main(){
	c_p_c();
	int TC = 1,t = 0;
   cin >> TC;
	while(t++ < TC){
		//cout << "Case #" << t << ": "; // For Google CodeJam and Kickstart
		solve();
        cout<<"\n";
	}

	cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";

	return 0; 
}