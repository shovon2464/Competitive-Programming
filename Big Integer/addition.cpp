#include<iostream>
#include<algorithm>


using namespace std;

char digitToChar(int digit){
    return digit + '0';
}

int charToDigit(char c1){
    return (c1 - '0');
}

string addNumbers(string n1, string n2){

    //make sure N2 is larger
    if(n1.length() > n2.length()){
        swap(n1,n2);
    }

    //result
    string result = "";

    //reverse
    reverse(n1.begin(),n1.end());
    reverse(n2.begin(), n2.end());

    //add digit upto a n1.length()

    int carry = 0;

    for(int i=0;i < n1.length();i++){
        int d1 = charToDigit(n1[i]);
        int d2 = charToDigit(n2[i]);
        int sum = d1+d2+carry;
        int output_digit = sum % 10;
        carry = sum/10;

        result.push_back(digitToChar(output_digit));
    }

    for(int i=n1.length();i<n2.length();i++){
        int d2 = charToDigit(n2[i]);
        int sum = d2+carry;

        int output_digit = sum % 10;
        carry = sum/10;

        result.push_back(digitToChar(output_digit));
    }

    //Finally if  carry is generated
    if (carry>0){
        result.push_back('1');
    }

    reverse(result.begin(),result.end());

    return result;

}


int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    //string

    string s1 = "1111111999999";
    string s2 = "999999888";

    string result = addNumbers(s1,s2);


    cout<<result;

    return 0;
}