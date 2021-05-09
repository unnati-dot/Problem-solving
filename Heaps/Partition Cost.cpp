/* Given an array of size n and an integer k. Find out the maximum and minimum cost 
to divide the given array into k parts. cost is given by
----->for[l,r] - a[l]+a[r]
*/
// we will do it by implementing max and min heap using priority queue

#include <bits/stdc++.h>
using namespace std;

void calculateMinandMaxCost(int a[],int n,int k){
     priority_queue<int, vector<int>> pq_maxheap; //declaring maxHeap
     priority_queue<int, vector<int>, greater<int>> pq_minheap; //declaring minHeap
     
     int maxcost= a[0]+a[n-1];
     int mincost = a[0]+a[n-1];
     for(int i=0;i<n-1;i++){
         pq_maxheap.push(a[i]+a[i+1]);
         pq_minheap.push(a[i]+a[i+1]);
     }
     for(int i=0;i<k-1;i++){
         maxcost+=pq_maxheap.top();
         mincost+=pq_minheap.top();
     }
     
     cout<<"\n\t maximum cost is:"<<maxcost;
     cout<<"\n\t minimum cost is:"<<mincost;
}
int main() {
	// your code goes here
	
	int a[10];
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	calculateMinandMaxCost(a,n,k);
	return 0;
}
