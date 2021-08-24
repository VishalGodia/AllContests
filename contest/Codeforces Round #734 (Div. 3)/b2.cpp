#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,k; cin>>n>>k;
	vector<int> a(n);
	unordered_map<int,int> m;
	for(auto &i:a){
		cin>>i;
	}
	vector<int> ans(n,0);
	for(int i=0;i<n;++i){
		m[a[i]]++;
		if()
	}
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