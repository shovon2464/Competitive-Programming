#include<bits/stdc++.h>

#include<stack>

using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    stack<string> book;

    book.push("C++");
    book.push("Java");
    book.push("Python");
    book.push("OS");

    while(!book.empty()){
        cout<<book.top()<<endl;
        book.pop();
    }


    return 0;
}