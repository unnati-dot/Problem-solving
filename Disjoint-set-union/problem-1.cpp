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
	vi parent(n + 1);
	for (int i = 0; i < n; ++i)
	{
		parent[i] = i;
	}

	vi r(n + 1, 0);
	vi size(n + 1, 1);

	int y;
	cin >> y;
	while (y--) {

		char ch;
		cin >> ch;

		if (ch == 'M') {
			int x, y;
			cin >> x >> y;
			uni(parent, r, x, y, size);
		} else if (ch == 'Q') {
			int h;
			cin >> h;
			int t = get(parent, h);
			cout << size[t] << endl;
		}


	}


	return 0;
}