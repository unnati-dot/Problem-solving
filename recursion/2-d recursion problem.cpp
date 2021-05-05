#include <iostream>
using namespace std;

/* this program will print no of ways by which we can reach last cell of the maze starting from first cell
   (we can move only in 2 directions ---> right and down)
*/
void floodfill(int i,int j,int n,int m,string osf){
    
    if(i==n-1 && j==m-1){
        cout<<osf<<"\n";
        return;
    }
    if(i>n||j>n){
        return;
    }
    floodfill(i+1,j,n,m,osf+"D");
    floodfill(i,j+1,n,m,osf+"R");
    
}
int main() {
	// your code goes here
	int n,m;
	string osf;
	cin>>n>>m;
	int a[n+1][m+1];
	for(int i=0;i<n;i++){
	    for(int j=0;j<m;j++){
	        cin>>a[i][j];
	    }
	}
	floodfill(0,0,n,m,osf);
	return 0;
}
