problem -> The Two Dishes

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
	    if(n==s){
	        cout<<s<<endl;
	    }else if(n<s){
	        ll x = s-n;
	        ll ans = x-n;
	        if(ans<0){
	            ans*=-1;
	        }
	        cout<<ans<<endl;
	    }else{
	        cout<<s<<endl;
	    }
	    
	}
	return 0;
}
