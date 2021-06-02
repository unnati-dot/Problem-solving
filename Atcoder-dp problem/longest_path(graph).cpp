#include<bits/stdc++.h>
#include<string>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
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
vector<int> graph(100005);
int dp[100005];

int findlargestpath(int src) {
	if (dp[src] != -1)  return dp[src];

	int result = INT_MIN;
	bool no_neighbour = true;
	for (int neighbour : graph[src]) {
		no_neighbour = false;
		result = max(result, findlargestpath(neighbour));
	}

	return no_neighbour ? 0 : result + 1;
}


int main()
{
#ifndef ONLINE_JUDGE

//for getting input from input.txt
	freopen("input.txt", "r", stdin);
//for getting output to output.txt
	freopen("output.txt", "w", stdout);

#endif
	memeset(dp, -1, sizeof(dp));
	int n, m;
	cin >> n >> m;
	while (m--) {
		int x, y;
		cin >> x >> y;
		graph[x].push_back(y);
	}
	int result = INT_MIN;
	for (int i = 1; i <= n; ++i)
	{
		result = max(result, findlargestpath(i));
	}
	cout << result;
	return 0;
}