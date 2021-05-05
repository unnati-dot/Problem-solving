/* Print all permutation of a string with unique characters */

#include <iostream>
using namespace std;

void permutation(string str,int j){
    if(str.size()-1 == j){
        cout<<str<<" \n";
        return;
        }
        for(int i=j;i<str.size();i++){
            swap(str[i],str[j]);
            permutation(str,j+1);
            swap(str[i],str[j]);
            
        }
}

int main() {
	// your code goes here
	
	string str;
	cin>>str;
	
	permutation(str,0);
	return 0;
}
