/* Find the kth largest element in the stream of numbers n  */
// we will use minHeap (Time complexity --> O(n*logk)


#include <bits/stdc++.h>
using namespace std;

void kthlargestelement(int n,int k){
     priority_queue<int, vector<int>, greater<int>> pq_minheap;
     for(int i=0;i<n;i++){
         int input;
         cin>>input;
         pq_minheap.push(input);
         if(pq_minheap.size()>k){
             pq_minheap.pop(); // will maintain top k elements in minHeap
         }
         if(pq_minheap.size()==k){
             cout<<"\n"<<pq_minheap.top();
         }else if(pq_minheap.size()<k){
             cout<<"\n"<<"#";
         }
     }
    
    
}

int main() {
	// your code goes here
	int n,k;
	cin>>n>>k;
	kthlargestelement(n,k);
	return 0;
}
