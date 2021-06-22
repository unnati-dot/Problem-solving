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

vector<vector<double>> dp(3005, vector<double>(3005, -1));

double coins(vector<double> &a, int i, int x) {

	if (x == 0)  return 1;
	if (i == 0)  return 0;
	if (dp[i][x] > -0.9)  return dp[i][x];

	return dp[i][x] = (a[i] * coins(a, i - 1, x - 1)) + ((1 - a[i]) * coins(a, i - 1, x));
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

	vector<double> a(n + 1);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	cout << fixed << setprecision(10) << coins(a, n, (n + 1) / 2);

	return 0;
}