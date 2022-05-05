#include<bits/stdc++.h>
using namespace std;

int distributeCandies(vector<int> candies) {
   unordered_set<int> temp;
   for(int i=0;i<candies.size();i++){
       temp.insert(candies[i]);
   }
   int size = candies.size()/2;
   int size2 = temp.size();
   return min(size,size2);
}