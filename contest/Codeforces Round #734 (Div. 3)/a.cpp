#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
	int n; cin>>n;
	int y=(n+1)/3;
	int x=n-2*y;
	cout<<x<<" "<<y<<"\n";
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int t; cin>>t;
	while(t--){
		solve();
	}
	return 0;
}