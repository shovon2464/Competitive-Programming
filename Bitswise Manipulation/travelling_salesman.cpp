#include<iostream>
#include<climits>
#include<vector>

using namespace std;

int tsp(vector< vector<int> > dist, int cityStates, int city, int n, vector< vector<int> >&  dp){
    //base case
    if(cityStates == (1<<n)-1){
        //return the cost from the current city
        return dist[city][0];
    }

    if(dp[cityStates][city] != -1){
        return dp[cityStates][city];
    }

    int ans = INT_MAX;

    //recursive cases
    for(int choice=0;choice<n;choice++){
        //otherwise try all possible options
        //if the city is visited or not
        if((cityStates & (1<<choice))==0){
            int subProb = dist[city][choice] + tsp(dist, (cityStates | (1<<choice)), choice, n, dp);
            ans = min(subProb, ans);
        }        
    }
    dp[cityStates][city] = ans;
    return ans;
}


int main(){
    freopen("output.txt","w",stdout);

    vector< vector<int> > dist = {
        {0,20,42,25},
        {20,0,30,34},
        {42,30,0,10},
        {25,34,10,0}
    };

    int n = dist.size();

    vector< vector<int> > dp(1<<n, vector<int> (n, -1));

    cout<<tsp(dist, 1, 0, n, dp);

}