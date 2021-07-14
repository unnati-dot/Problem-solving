#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define mt              make_tuple
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define range(a,b)      substr(a,b-a+1)
#define w(x)            int x; cin>>x; while(x--)
#define trace(x)        cerr<<#x<<": "<<x<<" "<<endl;
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

vector<vector<pair<int, int>>> graph;

void addEdge(int u, int v, bool bidir = true, int wt = 0) {
	graph[u].push_back(make_pair(v, wt));
	if (bidir) {
		graph[v].push_back(make_pair(u, wt));

	}

}

void dfshelper(int src, vector<bool> &visited) {
	visited[src] = true;
	//cout << src << " ";

	for (auto neigh : graph[src]) {
		if (not visited[neigh.first]) {
			dfshelper(neigh.first, visited);
		}
	}


}


int connectedComponents(int src, int vertices) {
	int components = 0;

	vector<bool> visited(vertices, false);
	for (int i = 1; i < vertices; i++) {
		if (not visited[i]) {
			components++;
			dfshelper(i, visited);
		}
	}
	return components;
}


int32_t main()
{
#ifndef ONLINE_JUDGE

//for getting input from input.txt
	freopen("input.txt", "r", stdin);
//for getting output to output.txt
	freopen("output.txt", "w", stdout);

#endif

	int vertices, edges;
	cin >> vertices >> edges;

	graph.resize(vertices);

	while (edges--) {
		int u, v, wt;
		cin >> u >> v >> wt;
		addEdge(u, v, true, wt);
	}

	cout << connectedComponents(0, vertices);


	return 0;
}