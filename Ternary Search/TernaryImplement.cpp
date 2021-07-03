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
int ternarySearch(int arr[], int n, int target) {
	int l = 0, r = n - 1;
	while (l <= r) {
		int m1 = l + (r - l) / 3;
		int m2 = r - (r - l) / 3;
		if (arr[m1] == target) return m1;
		if (arr[m2] == target) return m2;
		if (arr[m1] > target) r = m1 - 1;
		else if (arr[m2] < target) l = m2 + 1;
		else {
			l = m1 + 1;
			r = m2 - 1;
		}
	}

	return -1;

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
	int target;
	int arr[n + 1];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> target;
	int ans = ternarySearch(arr, n, target);
	cout << ans;
	return 0;
}