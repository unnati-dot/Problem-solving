#include <iostream>
using namespace std;

int arraysortedornot(int arr[],int n){
    if(n==1 || n==0)  return 1;
    if(arr[n-1]<arr[n-2])  return 0;
    return arraysortedornot(arr,n-1);
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[10];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	int x = arraysortedornot(a,n);
	if(x==0)  cout<<"false";
	else  cout<<"true";
	return 0;
}
