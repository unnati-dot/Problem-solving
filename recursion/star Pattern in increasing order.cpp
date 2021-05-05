#include <iostream>
using namespace std;

void printpattern(int n){
    if(n==0) return;
    cout<<"* ";
    printpattern(n-1);
}
void pattern(int n,int i){
    if(n==0) return;
    printpattern(i);
    cout<<"\n";
    pattern(n-1,i+1);
}
int main() {
	// your code goes here
	pattern(5,1);
	return 0;
}
