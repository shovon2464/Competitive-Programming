#include<iostream>
#include<string>

using namespace std;

void overLayNumber(string c, int i){
    int j=0;
    while(i>0){
        int last_bit = (1 & i);
        if(last_bit){
            cout<<c[j];
        }
        i = i>>1;
        j++;
    }
    cout<<endl;
}


void generateAllSubstring(string c){
    int n = c.length();

    int limit = 1<<n;

    for(int i=0;i<limit;i++){
        overLayNumber(c,i);
    }
}

int main(){

    freopen("output.txt","w",stdout);
    string c = "abc";

    generateAllSubstring(c);
}