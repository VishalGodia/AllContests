#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n; cin>>n;
	vector<int> a(n);
	int AND=-1;
	for(auto &i:a){
		cin>>i;
		AND=AND&i;
	}
	int ans=0;
	for(auto i:a){
		ans=ans|(i xor AND);
	}
	cout<<AND<<" "<<ans<<"\n";
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