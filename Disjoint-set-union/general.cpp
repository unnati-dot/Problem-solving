//this program will implement simple get and union method in DSU . It is based on
// path compression.
//Time complexity for the same is O(log^*n)


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

	int n, m;
	cin >> n >> m;

	vi parent(n + 1);
	for (int i = 0; i < n; ++i)
	{
		parent[i] = i;
	}
	vi rank(n + 1, 0);

	while (m--) {

		string str;
		cin >> str;
		if (str == "union") {
			int x, y;
			cin >> x >> y;
			uni(parent, rank, x, y);
		} else if (str == "get") {
			int h;
			cin >> h;
			cout << get(parent, h) << "\n";

		}


	}

	return 0;
}
