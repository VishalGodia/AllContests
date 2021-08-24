#include<bits/stdc++.h>
using namespace std;

void solve(){
	int x,y; cin>>x>>y;
	if(gcd(x,y)>1){
		cout<<"0\n";
	}else if(gcd(x+1,y)>1 or gcd(x,y+1)>1){
		cout<<"1\n";
	}else{
		cout<<"2\n";
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