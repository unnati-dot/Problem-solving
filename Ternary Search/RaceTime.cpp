//solution for RaceTime question on codechef using ternary search


#include<bits/stdc++.h>
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

double f(double t, int n, vi &s, vi &d) {

	double mx = 0.0, mn = 1e18, val;
	for (ll i = 0i < n; i++) {
		val = s[i] * t + d[i];
		mx = max(val, mx);
		mn = min(val, mn);
	}
	return mx - mn;

}

int32_t main()
{
#ifndef ONLINE_JUDGE

//for getting input from input.txt
	freopen("input.txt", "r", stdin);
//for getting output to output.txt
	freopen("output.txt", "w", stdout);

#endif

	int n, k;
	cin >> n >> k;
	double l = 0.0, r = (double)k;
	double m1, m2, e = 1e-7, ans;
	while ((r - l) > e) {
		m1 = l + (r - l) / 3;
		m2 = r - (r - l) / 3;

		if (f(m1) > f(m2)) {
			l = m1;
		} else {
			r = m2;
		}
	}

	ans = f(l);
	cout << ans;

	return 0;
}