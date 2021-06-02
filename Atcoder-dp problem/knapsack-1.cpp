#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;

#define loop(i,n,k)     for(int i=k;i<n;i++)
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

int32_t main()
{
#ifndef ONLINE_JUDGE

//for getting input from input.txt
	freopen("input.txt", "r", stdin);
//for getting output to output.txt
	freopen("output.txt", "w", stdout);

#endif

	int n, w;
	cin >> n >> w;

	vi wt(n + 1, 0);
	vi val(n + 1, 0);
	vi dp1(w + 1, 0);
	vi dp2(w + 1, 0);
	loop(i, n, 0) {
		cin >> wt[i] >> val[i];
	}

	loop(i, n, 0) {
		loop(j, w + 1, 1) {
			if (wt[i] > j) {
				dp2[j] = dp1[j];
			} else {
				dp2[j] = max({dp2[j], dp1[j], val[i] + dp1[j - wt[i]]});
			}
		}
		dp2.swap(dp1);
		dp2.clear();
	}

	cout << dp1[w] << endl;

	return 0;
}