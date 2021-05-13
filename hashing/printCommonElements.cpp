/* Given two arrays , you have to print common elements in both the arrays */

#include <bits/stdc++.h>
using namespace std;

void findcommonele(int arr1[],int n,int arr2[],int m){
    
   unordered_map<int ,int> umap;
   for(int i=0;i<n;i++) //using hashmap
       umap[arr1[i]]++;
   
    for(int i=0;i<m;i++){
        if(umap.find(arr2[i])!=umap.end()){
            if(umap[arr2[i]]!=0){
            umap[arr2[i]]--;
           cout<<arr2[i]<<" ";
        }
           
    }          
}
}


int main() {
	// your code goes here
	int n,m;
	
	cin>>n;
	//cout<<"\n\t enter size for 2nd array:";
	cin>>m;
	int arr1[n+1],arr2[m+1];
	for(int i=0;i<n;i++){
	    cin>>arr1[i];
	}
	for(int i=0;i<m;i++){
	    cin>>arr2[i];
	}
	findcommonele(arr1,n,arr2,m);
	return 0;
}
