#include<bits/stdc++.h>
#include<map>
#include<list>
#include<string>

using namespace std;


int main(){

    freopen("output.txt","w",stdout);

    map<string, list<string> > phonebook;

    phonebook["Shovon"].push_back("11111");
    phonebook["Shovon"].push_back("111112");
    phonebook["Shovon"].push_back("111113");


    phonebook["Shakil"].push_back("11111");
    phonebook["Shakil"].push_back("111112");
    phonebook["Shakil"].push_back("111113");


    for(pair<string, list<string>> item : phonebook){
        for (string x : item.second){
            cout<<x<<endl;
        }
    }



    return 0;
}