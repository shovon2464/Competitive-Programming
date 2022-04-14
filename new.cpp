#include <iostream>

using namespace std;

bool ArrayEq(int a[], int b[], int size){
	for(int i = 0; i<size;i++){
		if (a[i] != b[i]){
			return false;
		}
	}
	return true;
}

int main(){
	int a[10];
	int b[10];
	for(int i=0;i<10;i++){
		a[i] = i;
		b[i] = i;
	}
	bool ans = ArrayEq(a,b,10);
	cout << ans;
	return 0;
}