 #include<bits/stdc++.h>
 #include<queue>

using namespace std;
int solve(vector<int> nums) {
    priority_queue<int, vector<int>, greater<int>> temp;
    for(int x: nums){
        temp.push(x);
    }

	int n = temp.size();

	int cost = 0;

	while(temp.size()>1){
		int sum = 0;
		for(int i=0;i<2;i++){
			sum +=temp.top();
			temp.pop();
		}
		cost += sum;
		temp.push(sum);
	}

    
    return cost;
}

int main(){


	vector<int> nums = {1,2,3,4,5};
	int cost = solve(nums);
    cout<<cost;
	return 0;
}