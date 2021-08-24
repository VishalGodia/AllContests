#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int a,b,c; cin>>a>>b>>c;
	if(a!=b or b!=c or a!=c){
		cout<<"1\n";
	}else{
		cout<<"0\n";
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