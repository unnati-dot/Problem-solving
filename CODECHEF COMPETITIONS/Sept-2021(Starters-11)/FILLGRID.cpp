Problem-> The Grid Fill Problem

#include <bits/stdc++.h>
using namespace std;

void print__arr(vector<vector<int>> &a,int num){
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}


int n;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    
	    cin>>n;
	    vector<vector<int>> a( n , vector<int> (n, 1));
	    
	    if(n==2){
	        a[0][0]=a[0][1]=a[1][0]=a[1][1]=-1;
	        print__arr(a,n);
	    }else{
	        a[0][1]=a[1][0]=-1;
	        for(int i=2;i<n;i++){
	            a[i][i]=-1;
	        }
	        print__arr(a,n);
	    }
	}
	return 0;
}
