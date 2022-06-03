class Solution {
public:
    int countGoodNumbers(long long n) {
        long long int even = 0;
        long long int odd = 0;
        if(n%2==0){
            even = n/2;
            odd = even;
        }
        else{
            odd = n/2;
            even = odd+1;
        }
        
        long long int total = 1;
        long long int mod = 1e9+7;
        
        
        long long int even_num = 5;
        while(even){
            if(even & 1){
                total *= even_num;
                total %= mod;
            }
            even_num *= even_num;
            even_num %= mod;
            even /= 2;
        }
        
        long long int odd_num = 4;
        while(odd){
            if(odd & 1){
                total *= odd_num;
                total %= mod;
            }
            odd_num *= odd_num;
            odd_num %= mod;
            odd /= 2;
        }
        
        return total;
    }
};