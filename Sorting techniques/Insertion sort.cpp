//Insertion sort
/* 
TIME COMPLEXITY: O(n^2)
SPACE COMPLEXITY : O(1)

*/

#include <iostream>
using namespace std;

void insertionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        
        int key = arr[i];
        int j= i-1;
        while(j>=0 and arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	insertionSort(arr,n);
	for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
	return 0;
}
