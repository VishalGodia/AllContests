#include<bits/stdc++.h>
using namespace std;
#define int long long
// bool biparte;
const int N=1e5+6;
// vector<int> parent(N);
// vector<int> sz(N);

// void makeSet(int v){
// 	parent[v]=v;
// 	sz[v]=1;
// }

// int findSet(int v){
// 	if(v==parent[v]) return v;
// 	return parent[v]=findSet(parent[v]);
// }

// void unionSet(int a,int b){
// 	a=findSet(a);
// 	b=findSet(b);
// 	if(a!=b){
// 		if(sz[a]<sz[b]) swap(a,b);
// 		parent[b]=a;
// 		sz[a]+=sz[b];
// 	}
// }
// vector<vector<int>> g[N];
// int cost=0;
// vector<int> dist(N),parent(N);
// const int inf=1e9;
// int n,m; 
// vector<bool> visited(N);
// 
// void prims(int source){
// 	for(int i=0;i<n;++i){
// 		dist[i]=inf;
// 	}
// 	set<vector<int>> s;
// 	dist[source]=0;
// 	s.insert({0,source});
// 	while(!s.empty()){
// 		auto x=*(s.begin());
// 		s.erase(x);
// 		visited[x[1]]=true;
// 		int u=x[1];
// 		int v=parent[u];
// 		int w=x[0];
// 		cout<<u<<" "<<v<<" "<<w<<"\n";
// 		cost+=w;
// 		for(auto it:g[x[1]]){
// 			if(visited[it[0]]) continue;
// 			if(dist[it[0]]>it[1]){
// 				s.erase({dist[it[0]],it[0]});
// 				dist[it[0]]=it[1];
// 				s.insert({dist[it[0]],it[0]});
// 				parent[it[0]]=x[1];
// 			}
// 		}
// 	}
// }

// void solve(){
// 	cin>>n>>m;
// 	for(int i=0;i<m;++i){
// 		int u,v,w; cin>>u>>v>>w;
// 		g[u].push_back({v,w});
// 		g[v].push_back({u,w});
// 	}
// 	prims(0);
// 	cout<<cost<<"\n";
// }

// void solve(){
// 	for(int i=0;i<N;++i) 
// 		makeSet(i);
// 	int n,m; cin>>n>>m;
// 	vector<vector<int>> edges;
// 	for(int i=0;i<m;++i){
// 		int u,v,w; cin>>u>>v>>w;
// 		edges.push_back({w,u,v});
// 	}
// 	sort(edges.begin(),edges.end());
// 	int cost=0;
// 	for(auto i:edges){
// 		int w=i[0];
// 		int u=i[1];
// 		int v=i[2];
// 		int x=findSet(u);
// 		int y=findSet(v);
// 		if(x==y) continue;
// 		else{
// 			cout<<u<<" "<<v<<"\n";
// 			cost+=w;
// 			unionSet(x,y);
// 		}
// 	}
// 	cout<<"Cost="<<cost<<"\n";
// }

// void solve(){
// 	biparte=true;
// 	int n,m; cin>>n>>m;
// 	vector<vector<int>> adj(n);
// 	for(int i=0;i<m;++i){
// 		int u,v; cin>>u>>v;
// 		adj[u].push_back(v);
// 		adj[v].push_back(u);
// 	}
// 	vector<bool> visited(n,false);
// 	vector<int> col(n,-1);
// 	for(int i=0;i<n;++i){
// 		if(!visited[i]){
// 			color(i,0,visited,col,adj);
// 		}
// 	}
// 	if(biparte) cout<<"Graph is biparted\n";
// 	else cout<<"Graph is not biparted\n";
// }

// void color(int u,int cur,vector<bool> &visited,vector<int> &col,vector<vector<int>> &adj){
// 	if(col[u]!=-1 and col[u]!=cur){
// 		biparte=false;
// 		return;
// 	}
// 	col[u]=cur;
// 	if(visited[u]) return;
// 	visited[u]=true;
// 	for(auto i:adj[u]){
// 		color(i,cur xor 1,visited,col,adj);
// 	}
// }
// const int inf=1e9;
// void solve(){
// 	int n,m; cin>>n>>m;
// 	vector<int> dist(n+1,inf);
// 	vector<vector<pair<int,int>>> graph(n+1);
// 	for(int i=0;i<m;++i){
// 		int u,v,w; cin>>u>>v>>w;
// 		graph[u].push_back({v,w});
// 		graph[v].push_back({u,w});
// 	}
// 	int source; cin>>source;
// 	dist[source]=0;
// 	set<pair<int,int>> s;
// 	s.insert({0,source});
// 	while(!s.empty()){
// 		auto x=*(s.begin());
// 		s.erase(x);
// 		for(auto it:graph[x.second]){
// 			if(dist[it.first]>dist[x.second]+it.second){
// 				s.erase({dist[it.first],it.first});
// 				dist[it.first]=dist[x.second]+it.second;
// 				s.insert({dist[it.first],it.first});
// 			}
// 		}
// 	}
// 	for(int i=1;i<=n;++i){
// 		if(dist[i]<inf) cout<<dist[i]<<" ";
// 		else cout<<"-1";
// 	}
// 	cout<<"\n";
// }



signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	solve();
	return 0;
}