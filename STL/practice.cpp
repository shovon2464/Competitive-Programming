#include<bits/stdc++.h>
#include<set>

using namespace std;

int main(){

    freopen("output.txt","w",stdout);
    set<string> fruits = {"apple","mango","guava","banana","apple"};

    for(set<string>::iterator it=fruits.begin();it !=fruits.end(); it++){
        cout<<*it<<endl;
    }

}