#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

int main(){

    string s  = "leetcode";

    unordered_map<char, int> umap; 
        
    for(int i=0;i<s.size();i++){
        char x =s[i];
        if(umap.find(x)==umap.end()){
            umap[x] = 1;
        }
        else{
            umap[x] += 1;
        }
    }
        
    for(int i=0;i<s.size();i++){
        char x = s[i];
        if(umap.at(x) == 1){
            return i;
        }
    }
        
    return -1;
}