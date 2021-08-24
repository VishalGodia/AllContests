#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e6;

void solve(){
	int n; cin>>n;
	map<int,int> m;
	for(int i=0;i<n;++i){
		int ele; cin>>ele;
		m[ele]++;
	}
	int ans=0;
	for(auto [ele,freq]:m){
		ans+=min(ele-1,freq);
	}
	cout<<ans<<"\n";
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