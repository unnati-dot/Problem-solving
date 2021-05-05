#include <iostream>
using namespace std;
int j=0;
void fun(int n,int i){
    if(n==0){
        return;
    }
    if(i<j){
        cout<<"*"<<" ";
        fun(n,i+1);
    }
    else{
        cout<<"\n";
        fun(n-1,0);
    }
}

int main() {
	// your code goes here
	fun(5,0);
	return 0;
}
