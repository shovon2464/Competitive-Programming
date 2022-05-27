#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int toInteger(char x){
    return (x-'0');
}

char toChar(int x){
    return (x + '0');
}

string addNumbers(string num1, string num2){

    //make sure num2 is larger
    if(num1.length()>num2.length()){
        swap(num1,num2);
    }

    //reverse
    reverse(num1.begin(),num1.end());
    reverse(num2.begin(), num2.end());


    string output = "";
    int carry = 0;

    //add digit upto a n1.length()

    for(int i = 0;i<num1.length();i++){
        int n1 = toInteger(num1[i]);
        int n2 = toInteger(num2[i]);
        int sum = n1+n2+carry;
        int val = sum % 10;
        carry = sum/10;
        

        output.push_back(toChar(val));
        
    }

    //from n1.length()

    for(int i=num1.length();i<num2.length();i++){
        int n2 = toInteger(num2[i]);
        int sum = n2+ carry;

        int val = sum % 10;
        carry = sum/10;

        output.push_back(toChar(val));
    }

    //Finally a carry is generated
    if(carry>0){
        output.push_back(toChar(carry));
    }

    //Reverse the final output
    reverse(output.begin(),output.end());

    

    return output;
    
} 


int main(){

    freopen("output.txt","w",stdout);

    //input as a string

    string num1 = "1111111999999";
    string num2 = "999999888";


    string result = addNumbers(num1,num2);

    cout<<result;





    return 0;
}