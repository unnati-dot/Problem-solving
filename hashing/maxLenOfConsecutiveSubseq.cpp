/* Find the length of longest consecutive sequence in the array */

/* we can use naive approach like we can sort the array and than we can check
  if there are consecutive elements in the array and calculate there length
  but sorting will take O(nlogn).
  So we are using hash set in order to make time complexity feasible.
*/
// time complexity : O(n)
#include <bits/stdc++.h>
using namespace std;

int maxsublength(int arr[],int n){
    unordered_set<int> s;
    int ans=0;
    
    for(int i=0;i<n;i++)
      s.insert(arr[i]);
    
    for(int i=0;i<n;i++){
        if(s.find(arr[i]-1)==(s.end())){
            
            int num = arr[i];
            while(s.find(num)!=s.end())
                num++;
                
                
           ans=max(ans,num-arr[i]);     
        }
    }
    
    return ans;
}
int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

cout<<"Length of largest subsequence of array:"<<maxsublength(a,n);
	return 0;
}
