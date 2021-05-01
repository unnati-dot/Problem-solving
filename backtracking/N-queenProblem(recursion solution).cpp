#include<bits/stdc++.h>
using namespace std;

int queencount=0;

bool issafe(vector<vector<bool>> &grid,int row,int col,int n){
    
    for(int i=row-1;i>=0;i--){
        if(grid[i][col]) return false;
    }
    for(int i= row-1,j=col-1;i>=0&&j>=0;i--,j--){
        if(grid[i][j]) return false;
        }
        
    for(int i= row-1,j=col+1;i>=0&&j<n;i--,j++){
        if(grid[i][j]) return false;
        }

 return true;        
        
}
void display(vector<vector<bool>> &grid,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]) {
                cout<<"Q"<<" ";
            }else{
                cout<<"_"<<" ";
            }
        }
        cout<<"\n";
    }
}






void countNqueen(vector<vector<bool>> &grid,int cur_row,int n){
    if(cur_row == n){
        queencount++;
        display(grid,n);
        cout<<"\n\n";
        return;
    }
    for(int i=0;i<n;i++){
        if(issafe(grid,cur_row,i,n)){
            
            grid[cur_row][i]=true;
            countNqueen(grid,cur_row+1,n);
             grid[cur_row][i]=false;
             
        }
    }
    
    
    
}

int main(){
    int n;
    cin>>n;
    vector<vector<bool>> grid(n,vector<bool>(n,false));
    
    countNqueen( grid,0,n);
    cout<<queencount;
    return 0;
}