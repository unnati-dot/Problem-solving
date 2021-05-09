/* check if the given binary tree is binary heap or not  */
// In this question LOT (level order traversel) is given

#include <iostream>
using namespace std;

int left(int i){
    return 2*i+1;
}
int right(int i){
    return 2*i+2;
}
int checkminheap(int l[],int n){
    for(int i=0;i<=n/2;i++){
        int leftIndex = left(i);
        int rightIndex= right(i);
        int smallest = i;
        
        if(leftIndex < n && l[leftIndex]<l[smallest])
            smallest = leftIndex;
        if(rightIndex <n&& l[rightIndex]<l[smallest])    
            smallest = rightIndex;
            
        if(smallest!=i){
            return 0;
        } 
        
    }
    return 1;
    
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	int l[n+1];
	for(int i=0;i<n;i++){
	    cin>>l[i];
	}
	
	int x = checkminheap(l,n);
	if(x==0)
	  cout<<"\n\t not a min heap";
	else
	  cout<<"\n\t it is a min heap";
	return 0;
}
