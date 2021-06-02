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

void uni(vi &parent, vi &rank, int a, int b) {

//union by size
	a = get(parent, a);
	b = get(parent, b);

	if (rank[a] == rank[b]) {
		rank[a]++;
	}
	if (rank[a] > rank[b]) {
		parent[b] = a;
	} else {
		parent[a] = b;
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

	int n, m, k;
	cin >> n >> m >> k;

	vi parent(n + 1);
	for (int i = 0; i < n; ++i)
	{
		parent[i] = i;
	}
	vi rank(n + 1, 0);

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
	}

	vector<pair<int, int>> qval(k);
	vector<int>qtype(k);
	int a, b;
	for (int i = 0; i < k; i++) {
		string str;
		cin >> str;
		cin >> a >> b;


		qval[i] = {a, b};
		if (str == "cut") {
			qtype[i] = 1;
		} else {
			qtype[i] = 2;
		}
	}

	reverse(qtype.begin, qtype.end);
	reverse(qvalue.begin, qvalue.end);

	vector<string> result;

	for (int i = 0; i < k; ++i)
	{
		if (qtype[i] == 1) {
			uni(parent, rank, qval[i].first, qval[i].second);
		} else {
			int a = get(parent, qvalue[i].first);
			int b = get(parent, qvalue[i].second);
			if (a != b)
				result.push_back("NO");
			else {
				result.push_back("YES");
			}


		}
	}
	reverse(result.begin, result.end);
	for (int i = 0; i < result.size(); ++i)
	{
		cout << result[i];
	}





	return 0;
}