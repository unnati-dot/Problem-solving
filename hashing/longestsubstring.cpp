/* Longest substring without repeating character */


#include <bits/stdc++.h>
using namespace std;

void countlongSubstr(string str){
    unordered_map<char,int> umap;
    int count=0;
    for(int i=0;i<str.length();i++){
        umap[str[i]]++;
    }
    for(auto u:umap){
        count++;
        cout<<u.first;
    }
    cout<<"\n\t count:"<<count;
}

int main() {
	// your code goes here
	string str;
	cin>>str;
	countlongSubstr(str);
	
	
	return 0;
}
