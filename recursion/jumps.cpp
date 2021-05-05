#include <iostream>
using namespace std;

/*  You are standing on 0th cell and want to reach n-1 cell.
    You can have 6 possible jumps to make
    this program will print possible paths for the same.
*/
void dicepath(int n,int i,string osf){
    if(i>=n)  return;
    if(i==n-1){
        cout<<osf<<endl;
        return;
    }
    for(int j=1;j<=6;j++){
        dicepath(n,i+j,osf+to_string(j));
    }
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	string osf;
	dicepath(n,2,osf);
	
	return 0;
}
