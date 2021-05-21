// QUICK SORT
/* 
TIME COMPLEXITY: O(nlogn)
SPACE COMPLEXITY: O(nlogn)

*/
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int lo,int hi){
    int m=lo;
    int pivot = hi;
    for(int i = lo;i<hi;i++){
        if(arr[i]<arr[pivot]){
            swap(arr[i],arr[m]);
            m++;
        }
    }
    swap(arr[pivot],arr[m]);
    return m;
}
int randomPivotAlgo(int arr[],int lo,int hi){
    int n= rand();
    int pivot = lo+(n%(hi-lo+1));
    swap(arr[pivot],arr[hi]);
    return partition(arr,lo,hi);
    
}
void quicksort(int arr[],int lo,int hi){
    if(lo<hi){
        int pivot_index = randomPivotAlgo(arr,lo,hi);
        quicksort(arr,lo,pivot_index-1);
        quicksort(arr,pivot_index+1,hi);
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
       quicksort(arr,0,n-1);
	for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
	return 0;
}
