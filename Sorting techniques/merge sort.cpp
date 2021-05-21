//merge sort

/* TIME COMPLEXITY : O(nlogn)
   SPACE COMPLEXITY : O(n)
*/

#include<bits/stdc++.h>
using namespace std;

int mid(int a,int b){
    return ((a+b)/2);
}

void merge(int *arr,int start,int end){
    int m = mid(start,end);
    int *result = new int[end-start]();
    int k=0;
    int i=start,j=m+1;
    while(i<=m and j<=end){
        if(arr[i]<arr[j]){
            result[k++]=arr[i++];
        }else{
            result[k++]=arr[j++];
        }
    }
    while(i<=m){
        result[k++]=arr[i++];
    }
    while(j<=end){
        result[k++]=arr[j++];
    }
    k=0;
    for(int i=start;i<=end;i++){
        arr[i]=result[k];
        k++;
    }
    
    
    delete[] result;
    
}

void mergesort(int arr[],int start,int end){
    if(start>=end) return;
    int m = mid(start,end);
    mergesort(arr,start,m);
    mergesort(arr,m+1,end);
    merge(arr,start,end);
    
}



int main(){

int n;
cin>>n;
int arr[n+1];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

mergesort(arr,0,n-1);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

return 0;
}