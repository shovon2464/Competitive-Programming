#include<bits/stdc++.h>
#include<deque>

using namespace std;

int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    deque<int> dq(10);

    for(int i=0;i<10;i++){
        dq[i] = i*i;
    }

    

    for(int x : dq){
        cout<<x<<endl;
    }

    //empty deque of ints
    //deque<int> frist;

    //four ints with value 100
    //deque<int> second (4,100);

    //interating through second
    //deque<int> third(second.begin(),second.end());

    //a copy of third
    //deque<int> fourth(third);

    //the iterator constructor can be used to copy arrays

    //int myints[] = {16,2,77,29};

    //int n = sizeof(myints)/sizeof(int);

    //deque<int> fifth (myints, myints+n);


    return 0;
}