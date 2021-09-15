Problem-> Obtain the Sum

#include <iostream>
using namespace std;
#define ll long long int

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll n,s;
	    cin>>n>>s;
	    ll ans = (n*(n+1))/2;
	    if(ans<=s){
	        cout<<"-1"<<endl;
	    }else{
	        ll x=ans-s;
	        if(x>n){
	            cout<<"-1"<<endl;
	        }else{
	            cout<<x<<endl;
	        }
	        
	    }
	}
	return 0;
}
