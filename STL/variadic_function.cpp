#include<iostream>

using namespace std;

int sum(){
    return 0;
}

template<typename... T>

int sum(int a, T... args){
    return a+sum(args...);
}


void print_variadic(){
    return ;
}

template<typename X, typename... Xs>



void print_variadic(X str, Xs... args){
    cout<<str<<endl;
    print_variadic(args...);
}

int main(){
     
     freopen("output.txt","w",stdout);

     cout<<sum(1,2,3,3,4,5)<<endl;
     cout<<sum(1,2)<<endl;
    
    print_variadic(1,2,3.14, "pass me any", "number of arguments", "I wil print\n");

    
    return 0;
}