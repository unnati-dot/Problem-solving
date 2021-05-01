#include<bits/stdc++.h>
using namespace std;

int knightcount=0;


bool issafe(vector<vector<bool>> &grid,int r,int c,int n){
    
   if(r-2 >=0 and c-1 >=0 and grid[r-2][c-1]) return false;      
   if(r-1 >=0 and c-2 >=0 and grid[r-1][c-2]) return false;
   if(r-2 >=0 and c+1 <n and grid[r-2][c+1]) return false;
   if(r-1 >=0 and c+2 <n and grid[r-1][c+2]) return false;
   
   return true;
}
void display(vector<vector<bool>> &grid,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]) {
                cout<<"K"<<" ";
            }else{
                cout<<"_"<<" ";
            }
        }
        cout<<"\n";
    }
}
void countNknight(vector<vector<bool>> &grid,int cur_row,int cur_col ,int n,int count){
    if(count == n){
        knightcount++;
        display(grid,n);
        cout<<"\n\n";
        return;
    }
    for(int i=cur_row;i<n;i++){
        for(int j = (cur_row==i)?cur_col:0;j<n;j++){
             if(issafe(grid,i,j,n)){
            
            grid[i][j]=true;
            countNknight(grid,i,j+1,n,count+1);
             grid[i][j]=false;
             
        }
        }
       
    }
    }

int main(){
    int n;
    cin>>n;
    vector<vector<bool>> grid(n,vector<bool>(n,false));
    
    countNknight( grid,0,0,n,0);
    cout<<knightcount;
    return 0;
}
