#include<bits/stdc++.h>
using namespace std;

string solve(int A,int B, int C){
    
    cout<<A<<" "<<B<<" "<<C<<endl;
    
    if(A == B){
        return "=";
    }
    else if(A<0 or B<0){
        if(C & 1){
            if(A<B){
                return "<";
            }
            else if(A>B){
                return ">";
            }
        }
        else{
            if(abs(A) == abs(B)){
                return "=";
            }
            else if(A>B){
                return ">";
            }
            else if(A<B){
                return "<";
            }
        }
    }
    else{
        if(A>B){
            return ">";
        }
        else{
            return "<";
        }
    }

}