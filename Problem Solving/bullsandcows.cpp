#include<bits/stdc++.h>
using namespace std;

string getHint(string secret, string guess) {
    unordered_map<char,int> temp;
    vector<int> v;
    int bulls=0;
    int cows=0;
    for(int i=0;i<secret.length();i++){
        char s = secret[i];
        char g = guess[i];
        
        if(s==g){
            bulls += 1;
        }
        else{
            if(temp.find(s) != temp.end()){
                temp[s] += 1;
            }
            else{
                v.push_back(i);
                temp[s] = 1;
            }
        }
        
    }
    
    for(int x : v){
        char g = guess[x];
        if(temp[g]>0){
            cows += 1;
            temp[g] -= 1;
        }
    }
    
    return to_string(bulls) + 'A' + to_string(cows) + 'B';
    
}