// counting sort
// for positive numbers only
/* TIME COMPLEXITY : O(n)
   SPACE COMPLEXITY : O(n)
*/

#include <bits/stdc++.h>
using namespace std;

int maxele(vector<int> &arr){
    int max=arr[0];
    for(int i=1;i<arr.size();i++){
        if(max<arr[i])
           max=arr[i];
    }
    return max;
}

void countingsort(vector<int>& arr){
    int val = maxele(arr);
    
    //frequency array
    vector<int> freq(val+1);
    for(int &el:arr){
        freq[el]++;
    }
    
    //prefix sum
    for(int i=1;i<=val;i++){
        freq[i]+=freq[i-1];
    }
    
    vector<int> output(arr.size());
    
    for(int i=arr.size()-1;i>=0;i--){
        output[freq[arr[i]]-1] = arr[i];
        freq[arr[i]]--;
    }
    
   for (int i = 0; i < arr.size(); i++)
        arr[i] = output[i];

  for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
   }

}


int main(){


vector<int> arr = { 5, 10, 0, 3, 8, 5, 1, 10 };
countingsort(arr);

return 0;
}