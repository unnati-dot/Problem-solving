/* Print all subsets of the array */

#include <iostream>
using namespace std;

void print_subsets(int *arr,int n,int i,string osf){
    if(i==n) {
        cout<<"["<<osf<<"]"<<"\n";
        return;
    }
    print_subsets(arr,n,i+1,osf+to_string(arr[i])+",");
     print_subsets(arr,n,i+1,osf);
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	string osf;
	print_subsets(arr,n,0,osf);
	return 0;
}
