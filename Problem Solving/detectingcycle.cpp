#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;


int main(){

     unordered_map<ListNode*,bool> visited;
        
        ListNode *temp = head;
        
        while(temp != NULL){
            if(visited.count(temp) != 0){
                return true;
            }
            visited[temp] = true;
            temp = temp->next;
        }

    return 0;
}