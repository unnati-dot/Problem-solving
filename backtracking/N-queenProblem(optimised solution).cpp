#include <bits/stdc++.h>
using namespace std;
//using bitset it will take o(1) time instead of o(n)
bitset<100> col,ld,rd;
//ld is for left diagonal and rd is for right diagonal
int ans=0;
void nqueenopt(int n,int cr){
    
    if(cr==n){
        ans++;
        return;
    }
    for(int i=0;i<n;i++){
        if(!col[i] and !ld[cr-i+n-1] and !rd[cr+i]){
            col[i]= ld[cr-i+n-1]= rd[cr+i]= 1;
            nqueenopt(n,cr+1);
             col[i]= ld[cr-i+n-1]= rd[cr+i]= 0;
        }
    }
    
    
}
int main() {
int n;
cin>>n;
nqueenopt(n,0);
cout<<ans;


	return 0;
}
