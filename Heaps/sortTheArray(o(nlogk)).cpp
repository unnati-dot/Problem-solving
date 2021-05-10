/*  Sort the given array 
 given that each element of this array is atmost at a distance of k
 from its sorted position
 input ----> N,k and Array*/


//Time complexity -> O(N*logk)
//(as we are using minHeap to solve this problem)
/* 1. Push the first k+1 elements from the array to minHeap.(O(k*logk))
   2.extract the min element in the resultant array.(N times O(logk))
   3.put the next element from the array to our min minHeap (N times O(logk))
*/
#include <bits/stdc++.h>
using namespace std;

void sort(int a[],int n,int k){
    int resultant[n+1];
     priority_queue<int, vector<int>, greater<int>> pq_minheap;
     for(int i=0;i<=k;i++){
         pq_minheap.push(a[i]);
     }
     int item =k+1;
    
    for(int i=0;i<n;i++){
          resultant[i] = pq_minheap.top();
          pq_minheap.pop();
         if(item!=n){
             pq_minheap.push(a[item++]);
         }
    }
    cout<<"\n\t sorted array: ";
    for(int i=0;i<n;i++){
        cout<<resultant[i]<<" ";
    }
}
int main() {
	// your code goes here
	int n,k;
	cin>>n>>k;
	int a[n+1];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	
	sort(a,n,k);
	
	return 0;
}
