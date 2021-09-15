Problem name -> Find the Direction

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x>4){
	        int ans = x%4;
	        if(ans==1){
	            cout<<"East"<<endl;
	        }else if(ans==2){
	            cout<<"South"<<endl;
	        }else if(ans==3){
	            cout<<"West"<<endl;
	        }else{
	            cout<<"North"<<endl;
	        }
	    }else if(x==4){
	        cout<<"North"<<endl;
	    }else{
	        if(x==1){
	            cout<<"East"<<endl;
	        }else if(x==2){
	            cout<<"South"<<endl;
	        }else if(x==3){
	            cout<<"West"<<endl;
	        }else{
	            cout<<"North"<<endl;
	        }
	    }
	}
	return 0;
}
