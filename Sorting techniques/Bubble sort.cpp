//BUBBLE SORT
/* 
TIME COMPLEXITY: O(n^2)
SPACE COMPLEXITY : O(1)

*/

#include <iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
              
            }
        }}}


int main() {
	// your code goes here
		int n;
	cin>>n;
	int arr[n+1];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
       bubbleSort(arr,n);
	for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
	return 0;
}
