#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s; cin>>s;
	map<char,int> m;
	int n=s.size();
	int count=0,count2=0;
	for(auto i:s){
		m[i]++;
	}
	for(auto i:m){
		if(i.second>=2) count++;
		if(i.second==1) count2++;
	}
	int a=count2/2;
	count+=a;
	cout<<count<<"\n";
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