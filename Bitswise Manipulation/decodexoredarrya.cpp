#include<bits/stdc++.h>

using namespace std;


vector<int> decode(vector<int> encoded, int first) {
    
    vector<int> decoded;
    int elem = first;
    
    for(int i = 0;i<encoded.size();i++){
        decoded.push_back(elem);
        
        elem = encoded[i] ^ decoded[i];
    }
    
    decoded.push_back(elem);
    return decoded;
    
}

int main(){
    vector<int> encoded = {1,2,3};
    vector<int> answer = decode(encoded, 1);

    for(int x: answer){
        cout<<x<<" ";
    }
    return 0;
}