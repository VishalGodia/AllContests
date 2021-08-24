#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
	int n; cin>>n;
	vector<string> s(n);
	for(auto &i:s){
		cin>>i;
	}
	vector<int> m(5,0);
	for(int i=0;i<n;++i){
		for(auto j:s[i]){
			m[j-'a']++;
		}
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