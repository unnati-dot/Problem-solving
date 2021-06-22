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
int rotatedarraybinarySearch(int arr[], int n, int k) {
	int lo = 0, hi = n - 1;

	while (lo <= hi) {
		int mid = lo + (hi - lo) / 2;
		if (arr[mid] == k) return mid;
		else if (arr[mid] >= lo) {
			if (k >= arr[lo] and k <= arr[mid]) {
				hi = mid - 1;
			} else {
				lo = mid + 1;
			}
		} else {

			if (k >= arr[mid] and k <= arr[hi]) {
				lo = mid + 1;
			} else {
				hi = mid - 1;
			}
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

	int n, k;
	cin >> n;
	int a[n + 1];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> k;

	int ans = rotatedarraybinarySearch(a, n, k);

	cout << ans;
	return 0;
}