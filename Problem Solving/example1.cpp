#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;


int main(){

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);


    unordered_map<string,int> menu;

    //Insert key value pairs inside the hashtable O(1)
    menu["Maggi"] = 15;
    menu["Colddrink"] = 20;
    menu["dosa"] = 99;
    menu["pizza"] = 499;
    menu["indinaplatter"] = 399;
    



    //we can iterate over all the key-value pairs that are present

    for(pair<string,int> item : menu){
        cout<<item.first<<" - "<<item.second<<endl;
    }

    //update query O(1)
    menu["dosa"] = (1+0.1)*menu["dosa"];


    //Deletion query O(1)
    //menu.erase("dosa");

    //Searching inside a collectin of key value pairs (stored inside a hashtable)
    string item;
    cin>>item;


    if(menu.count(item)==0){
        cout<<item<<" is not available";
    }
    else{
        cout<<item<<" is available and costing "<<menu[item];
    }




    return 0;
}