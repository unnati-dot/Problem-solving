#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
//#define int             long long
#define pb              push_back
#define mp              make_pair
#define mt              make_tuple
#define pii             pair<int,int>
#define vi              vector< int>
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
int get(vi &parent, int a) {
	return parent[a] = (parent[a] == a ? a : get(parent, parent[a]));
}

void uni(vi &parent, vi &r, int a, int b, vi &size) {

//union by size
	a = get(parent, a);
	b = get(parent, b);

	if (r[a] == r[b]) {
		r[a]++;

	}
	if (r[a] > r[b]) {
		parent[b] = a;
		size[a] += size[b];

	} else {
		parent[a] = b;
		size[b] += size[a];
	}

}



int32_t main()
{
#ifndef ONLINE_JUDGE

//for getting input from input.txt
	freopen("input.txt", "r", stdin);
//for getting output to output.txt
	freopen("output.txt", "w", stdout);

#endif
	int n;
	cin >> n;
	vi parent(2 * n + 1);
	for (int i = 0; i < 2 * n; ++i)
	{
		parent[i] = i;
	}

	vi r(2 * n + 1, 0);
	vi size(2 * n + 1, 1);

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		uni(parent, r, a, b, size);
	}
	int ans = 2 , ans1 = 1008;
	for (int i = 0; i < 2 * n; i ++)
	{
		if (size[i] != 1) {
			int ind = get(parent, i);
			ans1 = min(size[ind], ans1);
		}
	}
	for (int i = 0; i < 2 * n; i ++)
	{
		if (size[i] != 1) {
			int ind1 = get(parent, i);
			ans = max(size[ind1], ans);
		}
	}
	//cout << "[" << ans << "," << ans1 << "]";
	for (int i = 0; i < 2 * n; i++) {
		cout << size[i] << "  ";
	}

	return 0;
}